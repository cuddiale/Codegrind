<!-- Scrivi un codice PHP per calcolare l'età di una persona a partire dalla sua data di nascita. -->

<?php
$dataNascita = new DateTime('1990-01-01');
$oggi = new DateTime();
$eta = $oggi->diff($dataNascita)->y;
echo $eta; // Output: età della persona
?>