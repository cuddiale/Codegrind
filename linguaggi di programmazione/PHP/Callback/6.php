<!-- Scrivi un codice PHP che utilizza una funzione di callback per eseguire una validazione su una stringa. -->

<?php
function validaStringa($string, $callback) {
    return $callback($string);
}

$lengthCheck = function($str) {
    return strlen($str) >= 5;
};

$string = 'hello';
$result = validaStringa($string, $lengthCheck);
echo $result ? 'La stringa è valida' : 'La stringa non è valida'; // Output: La stringa è valida
?>