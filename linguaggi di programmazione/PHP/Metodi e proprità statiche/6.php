<!-- Creare una classe "Cache" con una proprietà statica "dati" che contiene i dati memorizzati nella cache e un metodo statico "salvaDati($chiave, $valore)" che salva un valore nella cache utilizzando la chiave specificata. -->

<?php
class Cache {
    public static $dati = array();

    public static function salvaDati($chiave, $valore) {
        self::$dati[$chiave] = $valore;
    }
}

Cache::salvaDati('chiave1', 'valore1');
Cache::salvaDati('chiave2', 'valore2');
echo Cache::$dati['chiave1']; // Output: valore1
echo Cache::$dati['chiave2']; // Output: valore2
?>