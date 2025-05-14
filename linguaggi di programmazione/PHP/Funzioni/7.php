<!-- Scrivere una funzione PHP che accetta un numero intero come parametro e restituisce il fattoriale di quel numero. -->

<?php
function fattoriale($numero) {
    if ($numero <= 1) {
        return 1;
    } else {
        return $numero * fattoriale($numero - 1);
    }
}

$numero = 5;
$risultato = fattoriale($numero);
echo "Il fattoriale di " . $numero . " è: " . $risultato;
?>