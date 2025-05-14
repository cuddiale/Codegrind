<!-- Scrivere una funzione PHP che accetta un array di numeri come parametro e restituisce l'elemento più grande. -->

<?php
function elementoMax($array) {
    return max($array);
}

$numeri = [5, 2, 8, 4, 9];
$max = elementoMax($numeri);
echo "L'elemento più grande dell'array è: " . $max;
?>