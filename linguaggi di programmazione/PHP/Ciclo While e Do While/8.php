<!-- Scrivere un programma PHP che stampa la tabella dei quadrati dei numeri da 1 a 10 utilizzando un ciclo "do-while". -->

<?php
$i = 1;

do {
    $square = $i * $i;
    echo $i . " * " . $i . " = " . $square . "<br>";
    $i++;
} while ($i <= 10);
?>
