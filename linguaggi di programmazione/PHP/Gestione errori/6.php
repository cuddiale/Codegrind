<!-- Creare una funzione per loggare gli errori in un file. -->

<?php
function gestoreErrori($errno, $errstr) {
    $log = "Errore [$errno]: $errstr\n";
    error_log($log, 3, "errori.log");
}

set_error_handler("gestoreErrori");

echo $variabileNonDefinita; // Output nel file errori.log: Errore [8]: Undefined variable: variabileNonDefinita
?>