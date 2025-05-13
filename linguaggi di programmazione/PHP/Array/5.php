<!-- Scrivere un programma PHP che dichiara un array indicizzato di numeri interi e calcola la somma di tutti gli elementi. -->

<?php
$numbers = [1, 2, 3, 4, 5];
$sum = 0;

for ($i = 0; $i < count($numbers); $i++) {
    $sum += $numbers[$i];
}

echo "La somma degli elementi dell'array è: " . $sum;
?>