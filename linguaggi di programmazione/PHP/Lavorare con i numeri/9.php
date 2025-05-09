<!-- Scrivere un programma PHP per calcolare la radice quadrata di un numero e stampare il risultato con due decimali. -->

<?php
$numero = 25;
$risultato = sqrt($numero);
echo "La radice quadrata è: " . number_format($risultato, 2);
?>