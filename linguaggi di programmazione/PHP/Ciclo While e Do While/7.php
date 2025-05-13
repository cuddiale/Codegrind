<!-- Scrivere un programma PHP che stampa i primi 10 numeri della sequenza di Fibonacci utilizzando un ciclo "do-while". -->

<?php
$previous = 0;
$current = 1;
$i = 2;

echo $previous . " " . $current . " ";

do {
    $next = $previous + $current;
    echo $next . " ";
    $previous = $current;
    $current = $next;
    $i++;
} while ($i < 10);
?>
