<!-- Creare una classe "Contatore" con una proprietà statica "valore" e un metodo statico "azzera()" che reimposta il valore del contatore a 0. -->

<?php
class Contatore {
    public static $valore = 0;

    public static function azzera() {
        self::$valore = 0;
    }
}

Contatore::$valore = 10;
echo Contatore::$valore; // Output: 10
Contatore::azzera();
echo Contatore::$valore; // Output: 0
?>