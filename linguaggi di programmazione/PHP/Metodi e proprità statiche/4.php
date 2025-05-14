<!-- Creare una classe "Matematica" con un metodo statico "somma($numeri)" che restituisce la somma dei numeri passati come parametro. -->

<?php
class Matematica {
    public static function somma($numeri) {
        return array_sum($numeri);
    }
}

echo Matematica::somma(array(2, 4, 6)); // Output: 12
echo Matematica::somma(array(1, 3, 5, 7)); // Output: 16
?>