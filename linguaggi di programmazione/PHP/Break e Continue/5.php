<!-- Scrivere un programma PHP che stampa i numeri da 1 a 100, ma si interrompe quando trova un numero divisibile sia per 3 che per 5 utilizzando l'istruzione "break". -->

<?php
for ($i = 1; $i <= 100; $i++) {
    if ($i % 3 == 0 && $i % 5 == 0) {
        break;
    }
    echo $i . " ";
}
?>
