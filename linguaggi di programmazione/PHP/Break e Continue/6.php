<!-- Scrivere un programma PHP che stampa i numeri da 1 a 10, saltando il numero 5 utilizzando l'istruzione "continue". -->

<?php
for ($i = 1; $i <= 10; $i++) {
    if ($i == 5) {
        continue;
    }
    echo $i . " ";
}
?>