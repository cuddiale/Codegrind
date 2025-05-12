<!-- Scrivere un programma PHP che verifica se un numero intero è multiplo di 3, di 5 o di entrambi e stampa un messaggio appropriato. -->

<?php
$numero = 15;

if ($numero % 3 == 0 && $numero % 5 == 0) {
    echo "Il numero è multiplo di 3 e di 5.";
} elseif ($numero % 3 == 0) {
    echo "Il numero è multiplo di 3.";
} elseif ($numero % 5 == 0) {
    echo "Il numero è multiplo di 5.";
} else {
    echo "Il numero non è multiplo né di 3 né di 5.";
}
?>