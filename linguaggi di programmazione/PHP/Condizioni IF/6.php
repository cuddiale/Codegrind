<!-- Scrivere un programma PHP che verifica se un numero è compreso tra 1 e 100, compreso tra 101 e 200 o superiore a 200 e stampa un messaggio appropriato. -->

<?php
$numero = 150;

if ($numero >= 1 && $numero <= 100) {
    echo "Il numero è compreso tra 1 e 100.";
} elseif ($numero >= 101 && $numero <= 200) {
    echo "Il numero è compreso tra 101 e 200.";
} else {
    echo "Il numero è superiore a 200.";
}
?>