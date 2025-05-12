<!-- Scrivere un programma PHP che verifica se una variabile booleana è vera, falsa o non definita e stampa un messaggio appropriato. -->

<?php
$variabile = null;

if ($variabile === true) {
    echo "La variabile è vera.";
} elseif ($variabile === false) {
    echo "La variabile è falsa.";
} else {
    echo "La variabile non è definita.";
}
?>