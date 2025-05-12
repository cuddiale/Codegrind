<!-- Scrivere un programma PHP che verifica se un anno è bisestile o non bisestile e stampa un messaggio appropriato. -->

<?php
$anno = 2024;

if (($anno % 4 == 0 && $anno % 100 != 0) || $anno % 400 == 0) {
    echo "L'anno è bisestile.";
} else {
    echo "L'anno non è bisestile.";
}
?>
