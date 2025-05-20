<!-- Scrivi un codice PHP che utilizza una funzione di callback per trasformare una stringa. -->

<?php
function trasformaStringa($string, $callback) {
    return $callback($string);
}

$uppercase = function($str) {
    return strtoupper($str);
};

$string = 'ciao';
$result = trasformaStringa($string, $uppercase);
echo $result; // Output: CIAO
?>