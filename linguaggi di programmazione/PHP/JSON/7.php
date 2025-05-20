<!-- Scrivi un codice PHP per filtrare un array JSON in base a un criterio. -->

<?php
$jsonString = file_get_contents('data.json');
$array = json_decode($jsonString, true);

$result = array_filter($array, function($item) {
    return $item['età'] > 30;
});

$jsonString = json_encode($result);
file_put_contents('data.json', $jsonString);
?>