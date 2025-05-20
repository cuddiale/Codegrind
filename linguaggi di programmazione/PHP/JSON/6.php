<!-- Scrivi un codice PHP per ordinare un array JSON per un determinato campo. -->

<?php
$jsonString = file_get_contents('data.json');
$array = json_decode($jsonString, true);

usort($array, function($a, $b) {
    return $a['età'] - $b['età'];
});

$jsonString = json_encode($array);
file_put_contents('data.json', $jsonString);
?>
