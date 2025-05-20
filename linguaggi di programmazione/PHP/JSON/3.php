<!-- Scrivi un codice PHP per leggere un file JSON e convertirlo in un array. -->

<?php
$jsonString = file_get_contents('data.json');
$array = json_decode($jsonString, true);
print_r($array);
?>
