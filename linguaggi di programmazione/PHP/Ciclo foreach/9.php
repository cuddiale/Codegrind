<!-- Scrivere un programma PHP che stampa gli elementi di un array in ordine inverso. -->

<?php
$numbers = [1, 2, 3, 4, 5];

foreach (array_reverse($numbers) as $number) {
    echo $number . " ";
}
?>
