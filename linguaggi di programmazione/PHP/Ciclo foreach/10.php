<!-- Scrivere un programma PHP che stampa solo i numeri positivi di un array. -->

<?php
$numbers = [-2, -1, 0, 1, 2];

foreach ($numbers as $number) {
    if ($number > 0) {
        echo $number . " ";
    }
}
?>
