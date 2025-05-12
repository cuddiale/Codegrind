<!-- Scrivere un programma PHP che stampa solo gli elementi pari di un array -->

<?php
$numbers = [1, 2, 3, 4, 5];

foreach ($numbers as $number) {
    if ($number % 2 == 0) {
        echo $number . " ";
    }
}
?>