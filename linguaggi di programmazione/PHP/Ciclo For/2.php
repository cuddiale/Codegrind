<!-- Scrivere un programma PHP che calcola la somma dei numeri da 1 a 100. -->

<?php
$sum = 0;

for ($i = 1; $i <= 100; $i++) {
    $sum += $i;
}

echo "La somma dei numeri da 1 a 100 è: " . $sum;
?>