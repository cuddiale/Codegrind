<!-- Scrivi un codice PHP per rinominare un file. -->

<?php
$nomeFile = 'file_da_rinominare.txt';
$nuovoNomeFile = 'file_rinominato.txt';
if (rename($nomeFile, $nuovoNomeFile)) {
    echo "Il file è stato rinominato con successo!";
} else {
    echo "Si è verificato un errore durante la rinominazione del file.";
}
?>