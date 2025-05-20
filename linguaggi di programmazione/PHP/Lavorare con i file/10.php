<!-- Scrivi un codice PHP per eliminare una directory e tutti i file al suo interno. -->

<?php
$nomeDirectory = 'directory_da_eliminare';
if (rmdir($nomeDirectory)) {
    echo "La directory $nomeDirectory è stata eliminata con successo!";
} else {
    echo "Si è verificato un errore durante l'eliminazione della directory.";
}
?>
