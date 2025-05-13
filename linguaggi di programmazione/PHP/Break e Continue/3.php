<!-- Scrivere un programma PHP che stampa i numeri da 1 a 20, ma si interrompe quando trova un numero divisibile per 7 utilizzando l'istruzione "break". -->

<?php
for ($i = 1; $i <= 20; $i++) {
    if ($i % 7 == 0) {
        break;
    }
    echo $i . " ";
}
?>