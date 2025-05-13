<!-- Scrivere un programma PHP che stampa i numeri da 1 a 10, ma si interrompe quando arriva al numero 5 utilizzando l'istruzione "break". -->

<?php
for ($i = 1; $i <= 10; $i++) {
    if ($i == 5) {
        break;
    }
    echo $i . " ";
}
?>