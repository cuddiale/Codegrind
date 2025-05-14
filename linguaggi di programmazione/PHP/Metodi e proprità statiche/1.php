<!-- Creare una classe "Contatore" con una proprietà statica "valore" e un metodo statico "incrementa()" che incrementa il valore del contatore di 1 ogni volta che viene chiamato. -->

<?php
class Contatore {
    public static $valore = 0;

    public static function incrementa() {
        self::$valore++;
    }
}

echo Contatore::$valore; // Output: 0
Contatore::incrementa();
echo Contatore::$valore; // Output: 1
Contatore::incrementa();
echo Contatore::$valore; // Output: 2
?>
