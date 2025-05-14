<!-- Scrivere una funzione PHP che accetta una stringa come parametro e restituisce la stringa invertita. -->

<?php
function invertiStringa($stringa) {
    return strrev($stringa);
}

$stringa = "Ciao mondo";
$invertita = invertiStringa($stringa);
echo "La stringa invertita è: " . $invertita;
?>