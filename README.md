# Using this Lando Build
This Lando environment will create a base Drupal 7 site and a Drupal 8 site. The Drupal 8 site will also have the Migrate Plus and Migrate Tools module available but not enabled. There is no extra config, fields, or content types created in the builds.

## Requirements
1. Lando Installed


## How to build the environment
1. Clone this repo.
1. Open the `migration_examples` folder in your terminal.
1. In the `migration_examples` folder run `lando start`.

After building is complete you should have the following links:

`drupalmigration.lndo.site`
This is the path for the Drupal 8 site.

`d7site.drupal-migration.lndo.site`
This is the path for the Drupal 7 site.

`phpmyadmin.drupal-migration.lndo.site`
This is a local version of PHPMyAdmin that connects to the Drupal 8 database `database` and the Drupal 7 database `d7db`.

### Installing Drupal 7
Visit `d7site.drupal-migration.lndo.site` and follow the instructions to install Drupal 7. When filling in database information, use the following:
```
DB_HOST: d7db
DB_USER: drupal7
DB_PASSWORD: drupal7
DB_NAME: drupal7
```
### Installing Drupal 8
Before installing the site, you will need to download all the Drupal 8 Composer dependencies:
1. `cd d8_site`
1. `lando composer install`

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
## Using the sites
Currently to use Composer to add modules or libraries to the Drupal 8 site, you will need to be in the `d8_site` folder before running `lando composer require`.

The Drupal 7 is not setup with Drush or any other tools right now. It's just there to test content migrations to Drupal 8.
