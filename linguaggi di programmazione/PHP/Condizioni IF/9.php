<!-- Scrivere un programma PHP che verifica se un numero è divisibile per 4 ma non per 6 utilizzando un'unica istruzione "if" e stampa un messaggio appropriato. -->

<?php
$numero = 12;

if ($numero % 4 == 0 && $numero % 6 != 0) {
    echo "Il numero è divisibile per 4 ma non per 6.";
} else {
    echo "Il numero non soddisfa la condizione.";
}
?>
