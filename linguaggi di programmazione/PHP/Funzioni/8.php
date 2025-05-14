<!-- Scrivere una funzione PHP che accetta una stringa come parametro e restituisce true se la stringa è un palindromo, false altrimenti. -->

<?php
function isPalindromo($stringa) {
    $stringaInvertita = strrev($stringa);
    return strtolower($stringa) == strtolower($stringaInvertita);
}

$stringa = "Anna";
if (isPalindromo($stringa)) {
    echo "La stringa è un palindromo";
} else {
    echo "La stringa non è un palindromo";
}
?>
