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
  'field_more_info' => array(
    'und' => array(
      0 => array(
        'url' => 'https://en.wikipedia.org/wiki/Thorny_devil',
        'title' => 'Wikipedia',
        'attributes' => array(),
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
        'fid' => 4,
        'title' => NULL,
        'data' => NULL,
      ),
    ),
  ),
  'field_soundtrack_credits' => array(
    'und' => array(
      0 => array(
        'value' => 'Looperman: Vwdubber mt power drum',
        'format' => NULL,
      ),
    ),
  ),
  'field_metal' => array(
    'und' => array(
      0 => array(
        'value' => 'Horns on top of horns.',
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
  'comment_count' => 0,
  'date' => '2018-08-06 13:46:20 -0400',
  'user_uuid' => '9a1e1fa2-7f67-4b7e-be13-7506812ce50f',
);
  $nodes[] = array(
  'title' => 'Giant Girdled Lizard',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'lizard',
  'language' => 'und',
  'created' => 1534356553,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '48319277-7f81-41c9-8a32-eaad6036e57d',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>The&nbsp;<strong>sungazer</strong>&nbsp;(<em>Smaug giganteus</em>,&nbsp;<a href="https://en.wikipedia.org/wiki/Syn." title="Syn.">syn.</a>&nbsp;<em>Cordylus giganteus</em>), also known as the&nbsp;<strong>giant girdled lizard</strong>&nbsp;or&nbsp;<strong>giant dragon lizard</strong>&nbsp;or&nbsp;<strong>giant zonure</strong>,&nbsp;is the largest species of the&nbsp;<a href="https://en.wikipedia.org/wiki/Cordylidae" title="Cordylidae">Cordylidae</a>, a family of lizards from&nbsp;<a href="https://en.wikipedia.org/wiki/Sub-Saharan_Africa" title="Sub-Saharan Africa">Sub-Saharan Africa</a>.&nbsp;This&nbsp;<a href="https://en.wikipedia.org/wiki/Threatened_species" title="Threatened species">threatened</a>&nbsp;species is&nbsp;<a href="https://en.wikipedia.org/wiki/Endemism" title="Endemism">endemic</a>&nbsp;to&nbsp;<a href="https://en.wikipedia.org/wiki/Highveld" title="Highveld">Highveld</a>&nbsp;grasslands in the interior of South Africa.&nbsp;In 2011, it was assigned to the new genus&nbsp;<em><a href="https://en.wikipedia.org/wiki/Smaug_(genus)" title="Smaug (genus)">Smaug</a></em>&nbsp;along with seven other species previously belonging to the genus&nbsp;<em><a href="https://en.wikipedia.org/wiki/Cordylus" title="Cordylus">Cordylus</a></em>, based on a comprehensive molecular&nbsp;<a href="https://en.wikipedia.org/wiki/Phylogeny" title="Phylogeny">phylogeny</a>&nbsp;of the Cordylidae.</p>
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
        'filename' => 'Cordylus_giganteus.jpg',
        'uri' => 'public://Cordylus_giganteus.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 343654,
        'status' => 1,
        'type' => 'image',
        'uuid' => '35445c82-a660-401c-b759-d1fcf8964e37',
        'field_file_image_alt_text' => array(),
        'field_file_image_title_text' => array(),
        'rdf_mapping' => array(),
        'metadata' => array(
          'height' => 593,
          'width' => 790,
        ),
        'height' => 593,
        'width' => 790,
        'alt' => '',
        'title' => '',
        'uuid_features_packaged_file_path' => 'assets/Cordylus_giganteus.jpg',
      ),
    ),
  ),
  'field_image_caption' => array(
    'und' => array(
      0 => array(
        'value' => 'Credit: Wikimedia Foundation',
        'format' => NULL,
      ),
    ),
  ),
  'field_more_info' => array(
    'und' => array(
      0 => array(
        'url' => 'https://en.wikipedia.org/wiki/Giant_girdled_lizard',
        'title' => 'Wikipedia',
        'attributes' => array(),
      ),
    ),
  ),
  'field_region' => array(
    'und' => array(
      0 => array(
        'tid' => 'f5b51226-4356-4a8d-af13-723417f8a19c',
        'uuid' => 'f5b51226-4356-4a8d-af13-723417f8a19c',
      ),
    ),
  ),
  'field_soundtrack' => array(
    'und' => array(
      0 => array(
        'fid' => 7,
        'title' => NULL,
        'data' => NULL,
      ),
    ),
  ),
  'field_soundtrack_credits' => array(
    'und' => array(
      0 => array(
        'value' => 'Looperman: POLIMAR, e-scrape',
        'format' => NULL,
      ),
    ),
  ),
  'field_metal' => array(
    'und' => array(
      0 => array(
        'value' => 'Its scientific name is "Smaug giganteus" after the dragon in Tolkien\'s Hobbit',
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
  'comment_count' => 0,
  'date' => '2018-08-15 14:09:13 -0400',
  'user_uuid' => '9a1e1fa2-7f67-4b7e-be13-7506812ce50f',
);
  $nodes[] = array(
  'title' => 'Komodo Dragon',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'lizard',
  'language' => 'und',
  'created' => 1534355931,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '52175dcd-b804-4482-9bfc-1a6fe7f95d09',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>The&nbsp;<strong>Komodo dragon</strong>&nbsp;(<em>Varanus komodoensis</em>), also known as the&nbsp;<strong>Komodo monitor</strong>, is a species of&nbsp;<a href="https://en.wikipedia.org/wiki/Lizard" title="Lizard">lizard</a>&nbsp;found in the&nbsp;<a href="https://en.wikipedia.org/wiki/Indonesia" title="Indonesia">Indonesian</a>&nbsp;islands of&nbsp;<a href="https://en.wikipedia.org/wiki/Komodo_(island)" title="Komodo (island)">Komodo</a>,&nbsp;<a href="https://en.wikipedia.org/wiki/Rinca" title="Rinca">Rinca</a>,&nbsp;<a href="https://en.wikipedia.org/wiki/Flores" title="Flores">Flores</a>,&nbsp;<a href="https://en.wikipedia.org/wiki/Gili_Motang" title="Gili Motang">Gili Motang</a>, and&nbsp;<a href="https://en.wikipedia.org/wiki/Padar_(island)" title="Padar (island)">Padar</a>.<span style="font-size:10.8333px"> </span>A member of the&nbsp;<a href="https://en.wikipedia.org/wiki/Monitor_lizard" title="Monitor lizard">monitor lizard</a>&nbsp;family&nbsp;<a href="https://en.wikipedia.org/wiki/Varanidae" title="Varanidae">Varanidae</a>, it is the largest living species of lizard, growing to a maximum length of 3 metres (10&nbsp;ft) in rare cases and weighing up to approximately 70 kilograms (150&nbsp;lb).</p>
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
        'filename' => '30217984_Unknown.jpg',
        'uri' => 'public://30217984_Unknown.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 1121890,
        'status' => 1,
        'type' => 'image',
        'uuid' => 'f6b64896-b001-4137-8d22-9918a248133e',
        'field_file_image_alt_text' => array(),
        'field_file_image_title_text' => array(),
        'rdf_mapping' => array(),
        'metadata' => array(
          'height' => 1536,
          'width' => 2048,
        ),
        'height' => 1536,
        'width' => 2048,
        'alt' => '',
        'title' => '',
        'uuid_features_packaged_file_path' => 'assets/30217984_Unknown.jpg',
      ),
    ),
  ),
  'field_image_caption' => array(
    'und' => array(
      0 => array(
        'value' => 'Flickr: Schnippy',
        'format' => NULL,
      ),
    ),
  ),
  'field_more_info' => array(
    'und' => array(
      0 => array(
        'url' => 'https://en.wikipedia.org/wiki/Komodo_dragon',
        'title' => 'Wikipedia',
        'attributes' => array(),
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
        'fid' => 11,
        'title' => NULL,
        'data' => NULL,
      ),
    ),
  ),
  'field_soundtrack_credits' => array(
    'und' => array(
      0 => array(
        'value' => 'Looperman: Bass Bug',
        'format' => NULL,
      ),
    ),
  ),
  'field_metal' => array(
    'und' => array(
      0 => array(
        'value' => 'Its an actual dragon but looks more like a dinosaur',
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
  'comment_count' => 0,
  'date' => '2018-08-15 13:58:51 -0400',
  'user_uuid' => '9a1e1fa2-7f67-4b7e-be13-7506812ce50f',
);
  $nodes[] = array(
  'title' => 'Frill-necked Lizard ',
  'log' => '',
  'status' => 1,
  'comment' => 1,
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
  'field_more_info' => array(
    'und' => array(
      0 => array(
        'url' => 'https://en.wikipedia.org/wiki/Chlamydosaurus',
        'title' => 'Wikipedia',
        'attributes' => array(),
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
        'fid' => 7,
        'title' => NULL,
        'data' => NULL,
      ),
    ),
  ),
  'field_soundtrack_credits' => array(
    'und' => array(
      0 => array(
        'value' => 'Looperman: Danke corroded guitars',
        'format' => NULL,
      ),
    ),
  ),
  'field_metal' => array(),
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
  'comment_count' => 0,
  'date' => '2018-08-06 13:52:34 -0400',
  'user_uuid' => '9a1e1fa2-7f67-4b7e-be13-7506812ce50f',
);
  $nodes[] = array(
  'title' => 'Galapagos Land Iguana',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'lizard',
  'language' => 'und',
  'created' => 1534353834,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'a7b443e3-c568-462d-90c2-325d885881f7',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>The&nbsp;<strong>Galapagos land iguana</strong>&nbsp;(<em>Conolophus subcristatus</em>) is a species of&nbsp;<a href="https://en.wikipedia.org/wiki/Lizard" title="Lizard">lizard</a>&nbsp;in the family&nbsp;<a href="https://en.wikipedia.org/wiki/Iguanidae" title="Iguanidae">Iguanidae</a>. It is one of three species of the genus&nbsp;<em><a href="https://en.wikipedia.org/wiki/Conolophus" title="Conolophus">Conolophus</a></em>. It is&nbsp;<a href="https://en.wikipedia.org/wiki/Endemism" title="Endemism">endemic</a>&nbsp;to the&nbsp;<a href="https://en.wikipedia.org/wiki/Gal%C3%A1pagos_Islands" title="Galápagos Islands">Galápagos Islands</a>&nbsp;(<a href="https://en.wikipedia.org/wiki/Ecuador" title="Ecuador">Ecuador</a>), in the dry lowlands of&nbsp;<a href="https://en.wikipedia.org/wiki/Fernandina_Island" title="Fernandina Island">Fernandina</a>,&nbsp;<a href="https://en.wikipedia.org/wiki/Isabela_Island_(Ecuador)" title="Isabela Island (Ecuador)">Isabela</a>,&nbsp;<a href="https://en.wikipedia.org/wiki/Santa_Cruz_Island_(Gal%C3%A1pagos)" title="Santa Cruz Island (Galápagos)">Santa Cruz</a>,&nbsp;<a href="https://en.wikipedia.org/wiki/North_Seymour_Island" title="North Seymour Island">North Seymour</a>,&nbsp;<a href="https://en.wikipedia.org/wiki/Baltra_Island" title="Baltra Island">Baltra</a>, and&nbsp;<a href="https://en.wikipedia.org/wiki/South_Plaza_Island" title="South Plaza Island">South Plaza</a>.</p>
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
        'filename' => 'galapagos-land-iguana.jpg',
        'uri' => 'public://galapagos-land-iguana.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 3872272,
        'status' => 1,
        'type' => 'image',
        'uuid' => '0df8fa35-ed15-460c-8162-56d2db9c1561',
        'field_file_image_alt_text' => array(),
        'field_file_image_title_text' => array(),
        'rdf_mapping' => array(),
        'metadata' => array(
          'height' => 1956,
          'width' => 2708,
        ),
        'height' => 1956,
        'width' => 2708,
        'alt' => 'Galapagos Land Iguana',
        'title' => 'Galapagos Land Iguana',
        'uuid_features_packaged_file_path' => 'assets/galapagos-land-iguana.jpg',
      ),
    ),
  ),
  'field_image_caption' => array(
    'und' => array(
      0 => array(
        'value' => 'Credit: Wikimedia Foundation',
        'format' => NULL,
      ),
    ),
  ),
  'field_more_info' => array(
    'und' => array(
      0 => array(
        'url' => 'https://en.wikipedia.org/wiki/Galapagos_land_iguana',
        'title' => 'Wikipedia',
        'attributes' => array(),
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
        'fid' => 10,
        'title' => NULL,
        'data' => NULL,
      ),
    ),
  ),
  'field_soundtrack_credits' => array(
    'und' => array(
      0 => array(
        'value' => 'Looperman: Josephfunk metal talk rhythm guitar w/fxs 130',
        'format' => NULL,
      ),
    ),
  ),
  'field_metal' => array(),
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
  'comment_count' => 0,
  'date' => '2018-08-15 13:23:54 -0400',
  'user_uuid' => '9a1e1fa2-7f67-4b7e-be13-7506812ce50f',
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
  'field_more_info' => array(
    'und' => array(
      0 => array(
        'url' => 'https://en.wikipedia.org/wiki/Marine_iguana',
        'title' => 'Wikipedia',
        'attributes' => array(),
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
        'fid' => 10,
        'title' => NULL,
        'data' => NULL,
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
  'field_metal' => array(),
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
  'comment_count' => 0,
  'date' => '2018-08-06 15:03:44 -0400',
  'user_uuid' => '9a1e1fa2-7f67-4b7e-be13-7506812ce50f',
);
  $nodes[] = array(
  'title' => 'Mwanza flat-headed rock agama',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'lizard',
  'language' => 'und',
  'created' => 1534354037,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e099baf6-c0fa-4152-8527-7cc118b32041',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>The&nbsp;<strong>Mwanza flat-headed rock agama</strong>&nbsp;(<em>Agama mwanzae</em>) or the&nbsp;<strong>Spider-Man agama</strong>, because of its coloration, is a lizard in the&nbsp;<a href="https://en.wikipedia.org/wiki/Family_(biology)" title="Family (biology)">family</a>&nbsp;<a href="https://en.wikipedia.org/wiki/Agamidae" title="Agamidae">Agamidae</a>, found in&nbsp;<a href="https://en.wikipedia.org/wiki/Tanzania" title="Tanzania">Tanzania</a>,&nbsp;<a href="https://en.wikipedia.org/wiki/Rwanda" title="Rwanda">Rwanda</a>, and&nbsp;<a href="https://en.wikipedia.org/wiki/Kenya" title="Kenya">Kenya</a>.<sup><a href="https://en.wikipedia.org/wiki/Mwanza_flat-headed_rock_agama#cite_note-2">[2]</a></sup>&nbsp;It lives in semideserts and can often be seen in the heat of the day basking on rocks or&nbsp;<a href="https://en.wikipedia.org/wiki/Kopje" title="Kopje">kopjes</a>. The male\'s head, neck, and shoulders are bright red or violet, while the body is dark blue. The female is mostly brown and is difficult to distinguish from female agamas of other species. This lizard is often confused with the red-headed rock agama (<em><a href="https://en.wikipedia.org/wiki/Agama_agama" title="Agama agama">Agama agama</a></em>).<sup><a href="https://en.wikipedia.org/wiki/Mwanza_flat-headed_rock_agama#cite_note-3">[3]</a></sup></p>
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
        'filename' => 'rock-agama.jpg',
        'uri' => 'public://rock-agama.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 712025,
        'status' => 1,
        'type' => 'image',
        'uuid' => '1d890f89-302d-4aea-8472-41fc1b2b1d31',
        'field_file_image_alt_text' => array(),
        'field_file_image_title_text' => array(),
        'rdf_mapping' => array(),
        'metadata' => array(
          'height' => 1500,
          'width' => 2000,
        ),
        'height' => 1500,
        'width' => 2000,
        'alt' => 'Flat-Headed Rock Agama (Agama mwanzae), picture taken in Serengeti national park / Tanzania',
        'title' => 'Flat-Headed Rock Agama (Agama mwanzae), picture taken in Serengeti national park / Tanzania',
        'uuid_features_packaged_file_path' => 'assets/rock-agama.jpg',
      ),
    ),
  ),
  'field_image_caption' => array(
    'und' => array(
      0 => array(
        'value' => 'Credit: Wikimedia Foundation',
        'format' => NULL,
      ),
    ),
  ),
  'field_more_info' => array(
    'und' => array(
      0 => array(
        'url' => 'https://en.wikipedia.org/wiki/Mwanza_flat-headed_rock_agama',
        'title' => 'Wikipedia',
        'attributes' => array(),
      ),
    ),
  ),
  'field_region' => array(
    'und' => array(
      0 => array(
        'tid' => 'f5b51226-4356-4a8d-af13-723417f8a19c',
        'uuid' => 'f5b51226-4356-4a8d-af13-723417f8a19c',
      ),
    ),
  ),
  'field_soundtrack' => array(
    'und' => array(
      0 => array(
        'fid' => 7,
        'title' => NULL,
        'data' => NULL,
      ),
    ),
  ),
  'field_soundtrack_credits' => array(
    'und' => array(
      0 => array(
        'value' => 'Looperman: POLIMAR, e-scrape',
        'format' => NULL,
      ),
    ),
  ),
  'field_metal' => array(
    'und' => array(
      0 => array(
        'value' => 'Also known as the "Spider-man" agama because of its colors',
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
  'comment_count' => 0,
  'date' => '2018-08-15 13:27:17 -0400',
  'user_uuid' => '9a1e1fa2-7f67-4b7e-be13-7506812ce50f',
);
  $nodes[] = array(
  'title' => 'Philippine Sailfin Lizard',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'lizard',
  'language' => 'und',
  'created' => 1534354702,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'f3caafb3-7bf3-49d5-a747-d924cfe6a32e',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>The&nbsp;<strong>Philippine sailfin lizard</strong>,&nbsp;<strong>crested lizard</strong>,&nbsp;<strong>sail-fin lizard</strong>,&nbsp;<strong>sailfin water lizard</strong>,&nbsp;<strong>soa-soa water lizard</strong><sup><a href="https://en.wikipedia.org/wiki/Philippine_sailfin_lizard#cite_note-IUCN-1">[1]</a></sup>&nbsp;(<em><strong>Hydrosaurus pustulatus</strong></em>) or its native name&nbsp;<em>ibid</em>&nbsp;is an&nbsp;<a href="https://en.wikipedia.org/wiki/Oviparous" title="Oviparous">oviparous</a>&nbsp;lizard&nbsp;<a href="https://en.wikipedia.org/wiki/Endemism" title="Endemism">living only</a>&nbsp;in the&nbsp;<a href="https://en.wikipedia.org/wiki/Philippines" title="Philippines">Philippines</a>. The Philippine sailfin lizard is an excellent swimmer and has flattened toes that enable it to run across water. It is&nbsp;<a href="https://en.wikipedia.org/wiki/Omnivorous" title="Omnivorous">omnivorous</a>, feeding on&nbsp;<a href="https://en.wikipedia.org/wiki/Fruit" title="Fruit">fruit</a>, leaves, flowers,&nbsp;<a href="https://en.wikipedia.org/wiki/Insect" title="Insect">insects</a>, and small animals . It lives near rivers in the&nbsp;<a href="https://en.wikipedia.org/wiki/Tropical" title="Tropical">tropical</a>forests of the Philippines. Males have a larger crest on their back than the females. The males also show a violet color as they grow older. Females are less colorful.</p>
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
        'filename' => '16003176782_f0020dff2c_z.jpg',
        'uri' => 'public://16003176782_f0020dff2c_z.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 89649,
        'status' => 1,
        'type' => 'image',
        'uuid' => '19d4facb-f8b8-4484-b041-e08c4e62612b',
        'field_file_image_alt_text' => array(),
        'field_file_image_title_text' => array(),
        'rdf_mapping' => array(),
        'metadata' => array(
          'height' => 419,
          'width' => 640,
        ),
        'height' => 419,
        'width' => 640,
        'alt' => 'Philippine Sailfin Lizard',
        'title' => 'Philippine Sailfin Lizard',
        'uuid_features_packaged_file_path' => 'assets/16003176782_f0020dff2c_z.jpg',
      ),
    ),
  ),
  'field_image_caption' => array(
    'und' => array(
      0 => array(
        'value' => 'Flickr: Gautsch',
        'format' => NULL,
      ),
    ),
  ),
  'field_more_info' => array(
    'und' => array(
      0 => array(
        'url' => 'https://en.wikipedia.org/wiki/Philippine_sailfin_lizard',
        'title' => 'Wikipedia',
        'attributes' => array(),
      ),
    ),
  ),
  'field_region' => array(
    'und' => array(
      0 => array(
        'tid' => '6a5a1691-d55a-48e9-83af-0360a93cc063',
        'uuid' => '6a5a1691-d55a-48e9-83af-0360a93cc063',
      ),
    ),
  ),
  'field_soundtrack' => array(
    'und' => array(
      0 => array(
        'fid' => 10,
        'title' => NULL,
        'data' => NULL,
      ),
    ),
  ),
  'field_soundtrack_credits' => array(
    'und' => array(
      0 => array(
        'value' => 'Looperman: Epicrecord heavy electric loop',
        'format' => NULL,
      ),
    ),
  ),
  'field_metal' => array(
    'und' => array(
      0 => array(
        'value' => 'Practically a dragon. Dracarys!',
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
  'comment_count' => 0,
  'date' => '2018-08-15 13:38:22 -0400',
  'user_uuid' => '9a1e1fa2-7f67-4b7e-be13-7506812ce50f',
);
  return $nodes;
}
