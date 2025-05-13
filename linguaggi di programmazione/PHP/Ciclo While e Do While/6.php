<!-- Scrivere un programma PHP che calcola la media di una serie di numeri (inseriti manualmente) utilizzando un ciclo "do-while". -->

<?php
$numbers = [];
$total = 0;
$count = 0;

do {
    $input = readline("Inserisci un numero (0 per terminare): ");
    $number = intval($input);

    if ($number != 0) {
        $numbers[] = $number;
        $total += $number;
        $count++;
    }
} while ($number != 0);

$average = $total / $count;
echo "La media dei numeri è: " . $average;
?>