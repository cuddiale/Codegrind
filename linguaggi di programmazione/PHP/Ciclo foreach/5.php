<!-- Scrivere un programma PHP che calcola il prodotto degli elementi di un array. -->

<?php
$numbers = [2, 3, 4, 5];
$product = 1;

foreach ($numbers as $number) {
    $product *= $number;
}

echo "Il prodotto degli elementi dell'array è: " . $product;
?>