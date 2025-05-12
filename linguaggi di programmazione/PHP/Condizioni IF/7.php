<!-- Scrivere un programma PHP che verifica se una stringa è vuota, contiene solo spazi bianchi o contiene caratteri e stampa un messaggio appropriato. -->

<?php
$stringa = "   ";

if (empty(trim($stringa))) {
    echo "La stringa è vuota o contiene solo spazi bianchi.";
} else {
    echo "La stringa contiene caratteri.";
}
?>