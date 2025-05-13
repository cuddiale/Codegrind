<!-- Scrivere un programma PHP che stampa i numeri da 1 a 100, ma si interrompe quando trova un numero primo utilizzando l'istruzione "break". -->

<?php
for ($i = 1; $i <= 100; $i++) {
    $isPrime = true;

    for ($j = 2; $j <= sqrt($i); $j++) {
        if ($i % $j == 0) {
            $isPrime = false;
            break;
        }
    }

    if ($isPrime) {
        break;
    }

    echo $i . " ";
}
?>