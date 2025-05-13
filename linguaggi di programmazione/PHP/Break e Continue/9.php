<!-- Scrivere un programma PHP che stampa i numeri da 1 a 10, saltando i numeri pari utilizzando l'istruzione "continue". -->

<?php
for ($i = 1; $i <= 10; $i++) {
    if ($i % 2 == 0) {
        continue;
    }
    echo $i . " ";
}
?>