<!-- Creare un'interfaccia "Logger" con un metodo "log($messaggio)". Creare una classe "FileLogger" che implementa l'interfaccia e implementa il metodo "log($messaggio)" per scrivere il messaggio su un file di log. -->

<?php
interface Logger {
    public function log($messaggio);
}

class FileLogger implements Logger {
    public function log($messaggio) {
        $file = fopen("log.txt", "a");
        fwrite($file, $messaggio . "\n");
        fclose($file);
    }
}

$logger = new FileLogger();
$logger->log("Messaggio di log");
?>