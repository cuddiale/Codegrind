<!-- Scrivere un programma PHP che stampa solo i numeri multipli di 3 da 1 a 10 utilizzando l'istruzione "continue". -->

<?php
for ($i = 1; $i <= 10; $i++) {
    if ($i % 3 != 0) {
        continue;
    }
    echo $i . " ";
}
?>