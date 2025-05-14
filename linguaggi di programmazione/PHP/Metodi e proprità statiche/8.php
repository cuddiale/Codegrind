<!-- Creare una classe "Configurazione" con una proprietà statica "valori" che contiene un array associativo di valori di configurazione e un metodo statico "impostaValore($chiave, $valore)" che imposta un valore di configurazione utilizzando la chiave specificata. -->

<?php
class Configurazione {
    public static $valori = array(
        'lingua' => 'italiano',
        'tema' => 'scuro',
        'dimensione_font' => '12px'
    );

    public static function impostaValore($chiave, $valore) {
        self::$valori[$chiave] = $valore;
    }
}

Configurazione::impostaValore('lingua', 'inglese');
Configurazione::impostaValore('tema', 'chiaro');
echo Configurazione::$valori['lingua']; // Output: inglese
echo Configurazione::$valori['tema']; // Output: chiaro
?>