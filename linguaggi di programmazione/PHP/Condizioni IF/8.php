<!-- Scrivere un programma PHP che verifica se un numero è positivo e pari utilizzando un'unica istruzione "if" e stampa un messaggio appropriato. -->

<?php
$numero = 10;

if ($numero > 0 && $numero % 2 == 0) {
    echo "Il numero è positivo e pari.";
} else {
    echo "Il numero non soddisfa entrambe le condizioni.";
}
?>