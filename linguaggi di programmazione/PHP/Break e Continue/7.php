<!-- Scrivere un programma PHP che stampa i numeri da 1 a 20, saltando i numeri multipli di 4 utilizzando l'istruzione "continue". -->

<?php
for ($i = 1; $i <= 20; $i++) {
    if ($i % 4 == 0) {
        continue;
    }
    echo $i . " ";
}
?>