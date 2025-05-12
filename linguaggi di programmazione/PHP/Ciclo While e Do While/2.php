<!-- Scrivere un programma PHP che calcola la somma dei numeri da 1 a 100 utilizzando un ciclo "while". -->

<?php
$sum = 0;
$i = 1;

while ($i <= 100) {
    $sum += $i;
    $i++;
}

echo "La somma dei numeri da 1 a 100 è: " . $sum;
?>