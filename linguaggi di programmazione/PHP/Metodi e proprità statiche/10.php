<!-- Creare una classe "Matematica" con un metodo statico "moltiplica($numeri)" che restituisce il prodotto dei numeri passati come parametro. -->

<?php
class Matematica {
    public static function moltiplica($numeri) {
        $risultato = 1;
        foreach ($numeri as $numero) {
            $risultato *= $numero;
        }
        return $risultato;
    }
}

echo Matematica::moltiplica(array(2, 3, 4)); // Output: 24
echo Matematica::moltiplica(array(1, 2, 3, 4, 5)); // Output: 120
?>