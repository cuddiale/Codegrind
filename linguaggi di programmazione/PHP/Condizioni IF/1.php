<!-- Scrivere un programma PHP che verifica se un numero intero è positivo, negativo o zero e stampa un messaggio appropriato. -->

<?php
$numero = 5;

if ($numero > 0) {
    echo "Il numero è positivo.";
} elseif ($numero < 0) {
    echo "Il numero è negativo.";
} else {
    echo "Il numero è zero.";
}
?>