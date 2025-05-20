<!-- Utilizzare una regex per rimuovere tutti i caratteri non alfanumerici da una stringa. -->

<?php
$stringa = "Hello, World! 123.";
$pattern = "/[^a-zA-Z0-9]/";

$stringaPulita = preg_replace($pattern, "", $stringa);
echo $stringaPulita; // Output: HelloWorld123
?>