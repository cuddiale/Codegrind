<!-- Scrivi un codice PHP per creare una nuova directory. -->

<?php
$nomeDirectory = 'nuova_directory';
if (mkdir($nomeDirectory)) {
    echo "La directory $nomeDirectory è stata creata con successo!";
} else {
    echo "Si è verificato un errore durante la creazione della directory.";
}
?>