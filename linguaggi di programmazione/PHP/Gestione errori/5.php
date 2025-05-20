<!-- Generare un errore personalizzato utilizzando `trigger_error`. -->

<?php
function calcola($numero) {
    if ($numero < 0) {
        trigger_error("Numero negativo non consentito.", E_USER_WARNING);
    }
    return $numero * 2;
}

echo calcola(-5); // Output: PHP Warning:  Numero negativo non consentito.
?>