<!-- Scrivere una funzione PHP che accetta una stringa come parametro e restituisce la sua lunghezza. -->

<?php
function lunghezza($stringa) {
    return strlen($stringa);
}

$lunghezzaStringa = lunghezza("Ciao mondo");
echo "La lunghezza della stringa è: " . $lunghezzaStringa;
?>