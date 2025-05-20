<!-- Scrivi un codice PHP per leggere il contenuto di una directory e elencare tutti i file al suo interno. -->

<?php
$directory = 'path/directory';
$files = scandir($directory);
foreach ($files as $file) {
    if (is_file($directory . '/' . $file)) {
        echo $file . '<br>';
    }
}
?>