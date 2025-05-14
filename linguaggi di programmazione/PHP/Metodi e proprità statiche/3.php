<!-- Creare una classe "Logger" con una proprietà statica "livello" e un metodo statico "registra($messaggio)" che registra il messaggio di log solo se il livello di log è impostato su "debug". -->

<?php
class Logger {
    public static $livello = 'debug';

    public static function registra($messaggio) {
        if (self::$livello == 'debug') {
            echo $messaggio;
        }
    }
}

Logger::registra('Messaggio di debug'); // Output: Messaggio di debug
Logger::$livello = 'info';
Logger::registra('Messaggio di info'); // Nessun output
?>