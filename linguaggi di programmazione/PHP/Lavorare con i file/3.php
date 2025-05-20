<!-- Scrivi un codice PHP per verificare se un file esiste. -->

<?php
$nomeFile = 'testo.txt';
if (file_exists($nomeFile)) {
    echo "Il file $nomeFile esiste.";
} else {
    echo "Il file $nomeFile non esiste.";
}
?>