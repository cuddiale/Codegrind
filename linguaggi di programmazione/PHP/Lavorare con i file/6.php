<!-- Scrivi un codice PHP per eliminare un file. -->

<?php
$nomeFile = 'file_da_eliminare.txt';
if (unlink($nomeFile)) {
    echo "Il file è stato eliminato con successo!";
} else {
    echo "Si è verificato un errore durante l'eliminazione del file.";
}
?>