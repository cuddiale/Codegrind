<!-- Scrivi un codice PHP per convertire una stringa JSON in un array. -->

<?php
$jsonString = '{"nome":"Mario","cognome":"Rossi","età":30}';
$array = json_decode($jsonString, true);
print_r($array);
?>