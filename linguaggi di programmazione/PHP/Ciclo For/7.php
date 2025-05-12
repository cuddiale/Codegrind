<!-- Scrivere un programma PHP che stampa i primi 10 numeri della sequenza di Fibonacci. -->

<?php
$previous = 0;
$current = 1;

echo $previous . " " . $current . " ";

for ($i = 2; $i < 10; $i++) {
    $next = $previous + $current;
    echo $next . " ";
    $previous = $current;
    $current = $next;
}
?>