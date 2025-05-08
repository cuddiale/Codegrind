<!-- Scrivere un programma PHP per calcolare la differenza tra due numeri float e stampare il risultato con due decimali. -->

<?php
$numero1 = 10.5;
$numero2 = 3.2;
$risultato = $numero1 - $numero2;
echo "La differenza è: " . number_format($risultato, 2);
?>