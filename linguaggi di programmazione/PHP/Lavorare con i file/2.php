<!-- Scrivi un codice PHP per creare un nuovo file e scrivere del testo al suo interno. -->

<?php
$nomeFile = 'nuovo_file.txt';
$file = fopen($nomeFile, 'w');
$text = "Questo è il testo da scrivere nel file.";
fwrite($file, $text);
fclose($file);
echo "Il file $nomeFile è stato creato con successo!";
?>
