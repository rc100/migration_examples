# Using this Lando Build
This Lando environment will create a base Drupal 7 site and a Drupal 8 site. The Drupal 8 site will also have the Migrate Plus and Migrate Tools module available but not enabled. There is no extra config, fields, or content types created in the builds.

## Requirements
1. Lando Installed


## How to build the environment
1. Clone this repo.
2. Open the `migration_examples` folder in your terminal.
3. In the `migration_examples` folder run `lando start`.

After building is complete you should have the following links:

`drupalmigration.lndo.site`
This is the path for the Drupal 8 site.

`d7site.drupal-migration.lndo.site`
This is the path for the Drupal 7 site.

`phpmyadmin.drupal-migration.lndo.site`
This is a local version of PHPMyAdmin that connects to the Drupal 8 database `database` and the Drupal 7 database `d7db`.

### Installing Drupal 8
Before installing the site, you will need to download all the Drupal 8 Composer dependencies:
1. `cd d8_site`
2. `lando composer install`

Visit `drupalmigration.lndo.site` and follow the installation instructions. The settings.php already has credentials setup for this site and connecting to the Drupal 7 database.

```
[default][default]
DB_HOST: database
DB_USER: drupal8
DB_PASSWORD: drupal8
DB_NAME: drupal8

[migrate][default]
DB_HOST: d7db
DB_USER: drupal7
DB_PASSWORD: drupal7
DB_NAME: drupal7
```

### Installing Drupal 7
Visit `d7site.drupal-migration.lndo.site` and follow the instructions to install Drupal 7. When filling in database information, use the following:
```
DB_HOST: d7db
DB_USER: drupal7
DB_PASSWORD: drupal7
DB_NAME: drupal7
```
#### Setting up the Drupal 7 site

On the Drupal 7 site, after installation,
* enable the Features module at admin/modules
* enable the "migration_demo" feature at admin/structure/features
* revert the migration_demo feature at admin/structure/features/migration_demo
** select 'file entity' and 'content' in the list and then 'revert components' at the bottom of the page.

This will enable a dozen other modules needed to build out the site as well as creating the content types. This will also load all of the example data (lizards) into the site and you can view it on a grid here:

  /lizards-are-metal

or as a table format:

  /lizards

## Using the sites
Currently to use Composer to add modules or libraries to the Drupal 8 site, you will need to be in the `d8_site` folder before running `lando composer require`.

The Drupal 7 is not setup with Drush or any other tools right now. It's just there to test content migrations to Drupal 8.


How to Use the Migration Examples
---------------------------------

There are two main ways to interact with the migration examples in this project:

1. Read the d8_site/web/modules/.../...migration_example/migrations/...yml code. Much effort has gone into making the migration example code readable, not only in terms of the code itself, but also the extensive inline comments.

2. Enable the modules and run the migrations.


Enable and Run the Taxonomy Migration Examples

1. Backup your d8_site database so you can easily reset your migration environment:
  `cd web`
  `lando drush sql-dump --result-file=../drupal8.sql`

2. Import the Lizard content type configurations:
   `lando drush -y cim`

3. Enable the migrate modules:
  `lando drush -y en migrate migrate_plus migrate_tools migrate_drupal migrate_drupal_ui;`

4. Enable the migration example modules:
  `lando drush -y en d7_migration_group_example d7_taxonomy_vocabulary_migration_example d7_taxonomy_term_migration_example;lando drush -y en d7_node_migration_example;lando drush cr;`

5. Import the migration example configurations:
  `lando drush -y config-import --partial --source="modules/d7_migration_group_example/migrations/";lando drush -y config-import --partial --source="modules/database_migration_examples/d7_taxonomy_vocabulary_migration_example/migrations/";lando drush -y config-import --partial --source="modules/database_migration_examples/d7_taxonomy_term_migration_example/migrations/";lando drush -y config-import --partial --source="modules/database_migration_examples/d7_node_migration_example/migrations/";lando drush cr;lando drush ms;`

6. Run the migrations:
  `lando drush mim d7_taxonomy_vocabulary_migration_example;lando drush mim d7_taxonomy_term_migration_example;lando drush ms;lando drush mim d7_node_migration_example;`

7. Browse the d8_site to verify the migrations were successful:
    Taxonomy Vocabulary and Terms:
      http://drupalmigration.lndo.site/admin/structure/taxonomy/manage/region/overview
    Lizard nodes
      http://drupalmigration.lndo.site/admin/content
