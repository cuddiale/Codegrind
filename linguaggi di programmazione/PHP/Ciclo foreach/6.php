<!-- Scrivere un programma PHP che stampa solo le lettere maiuscole di una stringa. -->

<?php
$string = "Hello World";

foreach (str_split($string) as $char) {
    if (ctype_upper($char)) {
        echo $char . " ";
    }
}
?>