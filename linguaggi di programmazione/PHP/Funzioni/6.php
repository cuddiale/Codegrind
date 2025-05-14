<!-- Scrivere una funzione PHP che accetta un array di stringhe come parametro e restituisce un array con le stringhe in maiuscolo. -->

<?php
function maiuscoloArray($array) {
    $risultato = [];
    foreach ($array as $stringa) {
        $risultato[] = strtoupper($stringa);
    }
    return $risultato;
}

$stringhe = ["ciao", "mondo"];
$risultato = maiuscoloArray($stringhe);
echo "Le stringhe in maiuscolo sono: " . implode(", ", $risultato);
?>