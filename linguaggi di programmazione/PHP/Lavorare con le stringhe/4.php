<!-- Scrivi un codice PHP che controlla se una determinata stringa è presente all'interno di un'altra stringa. -->

<?php

$stringa = "Benvenuti nel nostro sito web!";
$parola = "sito";

if (strpos($stringa, $parola) !== false) {
    echo "La parola " . $parola . " è presente nella stringa.";
} else {
    echo "La parola " . $parola . " non è presente nella stringa.";
}

?>

