<!-- Scrivere un programma PHP che stampa i numeri da 1 a 100, ma si interrompe quando trova un numero divisibile per 3 e 7 utilizzando l'istruzione "break". -->

<?php
for ($i = 1; $i <= 100; $i++) {
    if ($i % 3 == 0 && $i % 7 == 0) {
        break;
    }
    echo $i . " ";
}
?>