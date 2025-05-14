<!-- Scrivere una funzione PHP che accetta un array di numeri come parametro e restituisce la somma di tutti gli elementi. -->

<?php
function sommaArray($array) {
    return array_sum($array);
}

$numeri = [1, 2, 3, 4, 5];
$risultato = sommaArray($numeri);
echo "La somma degli elementi dell'array è: " . $risultato;
?>