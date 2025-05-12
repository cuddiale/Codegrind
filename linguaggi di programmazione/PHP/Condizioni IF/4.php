<!-- Scrivere un programma PHP che verifica se una stringa ha una lunghezza inferiore a 10 caratteri, compresa tra 10 e 20 caratteri o superiore a 20 caratteri e stampa un messaggio appropriato. -->

<?php
$stringa = "Ciao, mondo!";

if (strlen($stringa) < 10) {
    echo "La stringa ha meno di 10 caratteri.";
} elseif (strlen($stringa) >= 10 && strlen($stringa) <= 20) {
    echo "La stringa ha una lunghezza compresa tra 10 e 20 caratteri.";
} else {
    echo "La stringa ha più di 20 caratteri.";
}
?>