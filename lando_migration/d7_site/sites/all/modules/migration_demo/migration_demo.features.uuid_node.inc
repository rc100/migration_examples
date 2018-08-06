<?php
/**
 * @file
 * migration_demo.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function migration_demo_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'Thorny Devil',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'lizard',
  'language' => 'und',
  'created' => 1533577580,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '1005294c-ab0c-4f70-99a2-ce7193036d58',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>The&nbsp;<strong>Thorny Devil</strong>&nbsp;(<em>Moloch horridus</em>) is an Australian lizard, also known as the&nbsp;<strong>mountain devil</strong>, the&nbsp;<strong>thorny lizard</strong>, or the&nbsp;<strong>moloch</strong>. This is the&nbsp;<a href="https://en.wikipedia.org/wiki/Monotypic_taxon" title="Monotypic taxon">sole species</a>&nbsp;of genus&nbsp;<em><strong>Moloch</strong></em>. The thorny dragon grows up to 20&nbsp;cm (7.9&nbsp;in) in length, and can live for 15 to 20 years. The females are larger than the males. Most of these&nbsp;<a href="https://en.wikipedia.org/wiki/Lizard" title="Lizard">lizards</a>&nbsp;are coloured in camouflaging shades of desert browns and tans. These colours change from pale colours during warm weather and to darker colours during cold weather. These animals are covered entirely with conical spines that are mostly&nbsp;<a href="https://en.wikipedia.org/wiki/Calcified" title="Calcified">uncalcified</a>.</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_image' => array(
    'und' => array(
      0 => array(
        'uid' => 1,
        'filename' => 'Thorny_devil_pale.jpg',
        'uri' => 'public://Thorny_devil_pale.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 568155,
        'status' => 1,
        'type' => 'image',
        'uuid' => '23ed9d19-6683-43c8-8ee4-f1af233748b3',
        'field_file_image_alt_text' => array(),
        'field_file_image_title_text' => array(),
        'rdf_mapping' => array(),
        'metadata' => array(
          'height' => 1447,
          'width' => 1920,
        ),
        'height' => 1447,
        'width' => 1920,
        'alt' => 'A thorny dragon in Western Australia',
        'title' => 'A thorny dragon in Western Australia',
        'uuid_features_packaged_file_path' => 'assets/Thorny_devil_pale.jpg',
      ),
    ),
  ),
  'field_image_caption' => array(
    'und' => array(
      0 => array(
        'value' => 'Credit: KeresH, Wikimedia Foundation',
        'format' => NULL,
      ),
    ),
  ),
  'field_region' => array(
    'und' => array(
      0 => array(
        'tid' => 'e8142708-2b42-42a4-a51d-af5e7e405f00',
        'uuid' => 'e8142708-2b42-42a4-a51d-af5e7e405f00',
      ),
    ),
  ),
  'field_soundtrack' => array(
    'und' => array(
      0 => array(
        'fid' => 2,
        'title' => NULL,
        'data' => NULL,
      ),
    ),
  ),
  'field_more_info' => array(
    'und' => array(
      0 => array(
        'url' => 'https://en.wikipedia.org/wiki/Thorny_devil',
        'title' => 'Wikipedia',
        'attributes' => array(),
      ),
    ),
  ),
  'field_soundtrack_credits' => array(
    'und' => array(
      0 => array(
        'value' => 'POLIMAR, e-scrape',
        'format' => NULL,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'date' => '2018-08-06 13:46:20 -0400',
  'user_uuid' => 'ed1148c0-be1b-41a7-aadb-88275c87b19d',
);
  $nodes[] = array(
  'title' => 'Frill-necked Lizard ',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'lizard',
  'language' => 'und',
  'created' => 1533577954,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '6a3b6fc3-baad-4d48-8b61-90bc2b0d1141',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>The&nbsp;<strong>frilled-necked lizard</strong>&nbsp;(<em>Chlamydosaurus kingii</em>), also known as the&nbsp;<strong>frilled lizard</strong>,&nbsp;<strong>frilled dragon</strong>&nbsp;or&nbsp;<strong>frilled agama</strong>, is a&nbsp;<a href="https://en.wikipedia.org/wiki/Species" title="Species">species</a>&nbsp;of&nbsp;<a href="https://en.wikipedia.org/wiki/Lizard" title="Lizard">lizard</a>&nbsp;which is found mainly in northern&nbsp;<a href="https://en.wikipedia.org/wiki/Australia" title="Australia">Australia</a>&nbsp;and southern&nbsp;<a href="https://en.wikipedia.org/wiki/New_Guinea" title="New Guinea">New Guinea</a>. This species is the&nbsp;<a href="https://en.wikipedia.org/wiki/Monotypic" title="Monotypic">only member</a>&nbsp;of the&nbsp;<a href="https://en.wikipedia.org/wiki/Genus" title="Genus">genus</a>&nbsp;<em><strong>Chlamydosaurus</strong></em>.Its common name comes from the large&nbsp;<a href="https://en.wikipedia.org/wiki/Neck_frill" title="Neck frill">frill</a>&nbsp;around its neck, which usually stays folded against the lizard\'s body.&nbsp;<em>C. kingii</em>&nbsp;is largely&nbsp;<a href="https://en.wikipedia.org/wiki/Arboreal" title="Arboreal">arboreal</a>, spending the majority of the time in the trees. The lizard\'s diet consists mainly of&nbsp;<a href="https://en.wikipedia.org/wiki/Insect" title="Insect">insects</a>&nbsp;and small&nbsp;<a href="https://en.wikipedia.org/wiki/Vertebrate" title="Vertebrate">vertebrates</a>.</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_image' => array(
    'und' => array(
      0 => array(
        'uid' => 1,
        'filename' => 'Frill-necked_Lizard_(Chlamydosaurus_kingii)_(8692622586).jpg',
        'uri' => 'public://Frill-necked_Lizard_(Chlamydosaurus_kingii)_(8692622586).jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 374722,
        'status' => 1,
        'type' => 'image',
        'uuid' => 'ca42a6b9-99c3-4171-942d-abd9ecef4481',
        'field_file_image_alt_text' => array(),
        'field_file_image_title_text' => array(),
        'rdf_mapping' => array(),
        'metadata' => array(
          'height' => 853,
          'width' => 1280,
        ),
        'height' => 853,
        'width' => 1280,
        'alt' => 'Frill-necked Lizard (Chlamydosaurus kingii)',
        'title' => 'Frill-necked Lizard (Chlamydosaurus kingii)',
        'uuid_features_packaged_file_path' => 'assets/Frill-necked_Lizard_(Chlamydosaurus_kingii)_(8692622586).jpg',
      ),
    ),
  ),
  'field_image_caption' => array(
    'und' => array(
      0 => array(
        'value' => 'Photo Credit: Matt, Wikimedia Foundation',
        'format' => NULL,
      ),
    ),
  ),
  'field_region' => array(
    'und' => array(
      0 => array(
        'tid' => 'e8142708-2b42-42a4-a51d-af5e7e405f00',
        'uuid' => 'e8142708-2b42-42a4-a51d-af5e7e405f00',
      ),
    ),
  ),
  'field_soundtrack' => array(
    'und' => array(
      0 => array(
        'fid' => 6,
        'title' => NULL,
        'data' => NULL,
      ),
    ),
  ),
  'field_more_info' => array(
    'und' => array(
      0 => array(
        'url' => 'https://en.wikipedia.org/wiki/Chlamydosaurus',
        'title' => 'Wikipedia',
        'attributes' => array(),
      ),
    ),
  ),
  'field_soundtrack_credits' => array(
    'und' => array(
      0 => array(
        'value' => 'VWDubber, MTPowerDrum-DoomBlackMetal',
        'format' => NULL,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'date' => '2018-08-06 13:52:34 -0400',
  'user_uuid' => 'ed1148c0-be1b-41a7-aadb-88275c87b19d',
);
  $nodes[] = array(
  'title' => 'Galapagos Marine Iguana',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'lizard',
  'language' => 'und',
  'created' => 1533582224,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'c31b6410-ec4d-4778-80b1-a4e6ea847161',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>The&nbsp;<strong>marine iguana</strong>&nbsp;(<em>Amblyrhynchus cristatus</em>), also known as the&nbsp;<strong>sea iguana</strong>,&nbsp;<strong>saltwater iguana</strong>, or&nbsp;<strong>Galápagos marine iguana</strong>, is a species of&nbsp;<a href="https://en.wikipedia.org/wiki/Iguana" title="Iguana">iguana</a>&nbsp;found only on the&nbsp;<a href="https://en.wikipedia.org/wiki/Gal%C3%A1pagos_Islands" title="Galápagos Islands">Galápagos Islands</a>&nbsp;(<a href="https://en.wikipedia.org/wiki/Ecuador" title="Ecuador">Ecuador</a>) that has the ability, unique among modern&nbsp;<a href="https://en.wikipedia.org/wiki/Lizard" title="Lizard">lizards</a>, to forage in the sea, making it a&nbsp;<a href="https://en.wikipedia.org/wiki/Marine_reptile" title="Marine reptile">marine reptile</a>.&nbsp;This iguana feeds almost exclusively on algae and large males dive to find this food source, while females and smaller males feed during low tide in the&nbsp;<a href="https://en.wikipedia.org/wiki/Intertidal_zone" title="Intertidal zone">intertidal zone</a>.&nbsp;They mainly live in&nbsp;<a href="https://en.wikipedia.org/wiki/Colony_(biology)" title="Colony (biology)">colonies</a>&nbsp;on rocky shores where they warm after visiting the relatively cold water or intertidal zone, but can also be seen in marshes,&nbsp;<a href="https://en.wikipedia.org/wiki/Mangrove" title="Mangrove">mangrove</a>&nbsp;and beaches.</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_image' => array(
    'und' => array(
      0 => array(
        'uid' => 1,
        'filename' => '1280px-Marineiguanas.JPG',
        'uri' => 'public://1280px-Marineiguanas.JPG',
        'filemime' => 'image/jpeg',
        'filesize' => 324733,
        'status' => 1,
        'type' => 'image',
        'uuid' => '9ce71b7f-f1f2-4857-a5a2-fbe48693af38',
        'field_file_image_alt_text' => array(),
        'field_file_image_title_text' => array(),
        'rdf_mapping' => array(),
        'metadata' => array(
          'height' => 853,
          'width' => 1280,
        ),
        'height' => 853,
        'width' => 1280,
        'alt' => 'Marine Iguanas at Fernandina, Galapagos Islands',
        'title' => 'Marine Iguanas at Fernandina, Galapagos Islands',
        'uuid_features_packaged_file_path' => 'assets/1280px-Marineiguanas.JPG',
      ),
    ),
  ),
  'field_image_caption' => array(
    'und' => array(
      0 => array(
        'value' => 'Photo Credit: Kjersti Holmang, Wikimedia Foundation',
        'format' => NULL,
      ),
    ),
  ),
  'field_region' => array(
    'und' => array(
      0 => array(
        'tid' => 'a09f1990-10a7-4fa2-a949-913529ff8c22',
        'uuid' => 'a09f1990-10a7-4fa2-a949-913529ff8c22',
      ),
    ),
  ),
  'field_soundtrack' => array(
    'und' => array(
      0 => array(
        'fid' => 8,
        'title' => NULL,
        'data' => NULL,
      ),
    ),
  ),
  'field_more_info' => array(
    'und' => array(
      0 => array(
        'url' => 'https://en.wikipedia.org/wiki/Marine_iguana',
        'title' => 'Wikipedia',
        'attributes' => array(),
      ),
    ),
  ),
  'field_soundtrack_credits' => array(
    'und' => array(
      0 => array(
        'value' => 'JosephFunk, Metal Talk Rhythm Guitar w fxs 130',
        'format' => NULL,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'date' => '2018-08-06 15:03:44 -0400',
  'user_uuid' => 'ed1148c0-be1b-41a7-aadb-88275c87b19d',
);
  return $nodes;
}
