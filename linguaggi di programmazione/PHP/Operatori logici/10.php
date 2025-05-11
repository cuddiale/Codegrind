<!-- Scrivere un programma PHP che verifica se una variabile è vuota o contiene una stringa. -->

<?php
$variabile = "";
$result = (empty($variabile) || is_string($variabile));
echo $result ? "La variabile è vuota o contiene una stringa." : "La variabile non è vuota e non contiene una stringa.";
?>