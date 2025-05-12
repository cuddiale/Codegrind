<!-- Scrivere un programma PHP che stampa le vocali presenti in una stringa. -->

<?php
$string = "Hello World";

foreach (str_split($string) as $char) {
    if (in_array(strtolower($char), ['a', 'e', 'i', 'o', 'u'])) {
        echo $char . " ";
    }
}
?>
