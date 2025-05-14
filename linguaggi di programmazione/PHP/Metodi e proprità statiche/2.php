<!-- Creare una classe "Configurazione" con una proprietà statica "opzioni" che contiene un array di opzioni di configurazione e un metodo statico "getOpzione($chiave)" che restituisce il valore dell'opzione corrispondente alla chiave specificata. -->

<?php
class Configurazione {
    public static $opzioni = array(
        'lingua' => 'italiano',
        'tema' => 'scuro',
        'dimensione_font' => '12px'
    );

    public static function getOpzione($chiave) {
        if (array_key_exists($chiave, self::$opzioni)) {
            return self::$opzioni[$chiave];
        }
        return null;
    }
}

echo Configurazione::getOpzione('lingua'); // Output: italiano
echo Configurazione::getOpzione('tema'); // Output: scuro
echo Configurazione::getOpzione('dimensione_font'); // Output: 12px
echo Configurazione::getOpzione('colore_sfondo'); // Output: null
?>
