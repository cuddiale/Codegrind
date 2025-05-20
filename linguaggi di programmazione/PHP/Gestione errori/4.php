<!-- Creare una funzione personalizzata per gestire gli errori utilizzando `set_error_handler`. -->

<?php
function gestoreErrori($errno, $errstr) {
    echo "Errore [$errno]: $errstr";
}

set_error_handler("gestoreErrori");

echo $variabileNonDefinita; // Output: Errore [8]: Undefined variable: variabileNonDefinita
?>