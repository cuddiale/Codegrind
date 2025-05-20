<!-- Scrivi un codice PHP per copiare il contenuto di un file in un altro file. -->

<?php
$fileOrigine = 'file_origine.txt';
$fileDestinazione = 'file_destinazione.txt';
if (copy($fileOrigine, $fileDestinazione)) {
    echo "Il file è stato copiato con successo!";
} else {
    echo "Si è verificato un errore durante la copia del file.";
}
?>