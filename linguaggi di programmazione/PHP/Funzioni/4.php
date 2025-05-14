<!-- Scrivere una funzione PHP che accetta un numero intero come parametro e restituisce true se il numero è pari, false altrimenti. -->

<?php
function isPari($numero) {
    return $numero % 2 == 0;
}

$numero = 4;
if (isPari($numero)) {
    echo "Il numero è pari";
} else {
    echo "Il numero è dispari";
}
?>