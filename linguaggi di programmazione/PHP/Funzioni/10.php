<!-- Scrivere una funzione PHP che accetta una stringa come parametro e restituisce una nuova stringa senza spazi. -->

<?php
function rimuoviSpazi($stringa) {
    return str_replace(" ", "", $stringa);
}

$stringa = "Ciao a tutti";
$stringaSenzaSpazi = rimuoviSpazi($stringa);
echo "La stringa senza spazi è: " . $stringaSenzaSpazi;
?>
