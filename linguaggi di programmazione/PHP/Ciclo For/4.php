<!-- Scrivere un programma PHP che calcola il prodotto dei numeri da 1 a 10 -->

<?php
$product = 1;

for ($i = 1; $i <= 10; $i++) {
    $product *= $i;
}

echo "Il prodotto dei numeri da 1 a 10 è: " . $product;
?>