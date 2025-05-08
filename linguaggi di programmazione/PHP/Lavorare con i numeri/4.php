<!-- Scrivere un programma PHP per calcolare il quoziente tra due numeri float e stampare il risultato con quattro decimali. -->

<?php
$numero1 = 10.8;
$numero2 = 2.5;
$risultato = $numero1 / $numero2;
echo "Il quoziente è: " . number_format($risultato, 4);
?>