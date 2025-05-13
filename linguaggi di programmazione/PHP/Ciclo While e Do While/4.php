<!-- Scrivere un programma PHP che calcola il prodotto dei numeri da 1 a 10 utilizzando un ciclo "while". -->

<?php
$product = 1;
$i = 1;

while ($i <= 10) {
    $product *= $i;
    $i++;
}

echo "Il prodotto dei numeri da 1 a 10 è: " . $product;
?>