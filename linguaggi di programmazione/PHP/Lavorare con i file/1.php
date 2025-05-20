<!-- Scrivi un codice PHP per aprire un file e leggerne il contenuto. -->

<?php
$nomeFile = 'testo.txt';
$file = fopen($nomeFile, 'r');
$contenuto = fread($file, filesize($nomeFile));
fclose($file);
echo $contenuto;
?>