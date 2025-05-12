<!-- Scrivere un programma PHP che calcola la media di una serie di numeri. -->

<?php
$numbers = [10, 5, 8, 12, 6];
$total = 0;
$count = count($numbers);

for ($i = 0; $i < $count; $i++) {
    $total += $numbers[$i];
}

$average = $total / $count;
echo "La media dei numeri è: " . $average;
?>