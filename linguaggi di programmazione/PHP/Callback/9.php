<!-- Scrivi un codice PHP che utilizza una funzione di callback per calcolare il massimo valore in un array. -->

<?php
function calcolaMassimo($array, $callback) {
    return max($array, $callback);
}

$square = function($value) {
    return $value * $value;
};

$numbers = [1, 2, 3, 4, 5];
$result = calcolaMassimo($numbers, $square);
echo $result; // Output: 25
?>S