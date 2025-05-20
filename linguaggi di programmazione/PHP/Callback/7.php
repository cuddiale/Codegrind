<!-- Scrivi un codice PHP che utilizza una funzione di callback per calcolare la somma di una serie di numeri. -->

<?php
function calcolaSomma($numbers, $callback) {
    return array_reduce($numbers, $callback);
}

$sum = function($carry, $value) {
    return $carry + $value;
};

$numbers = [1, 2, 3, 4, 5];
$result = calcolaSomma($numbers, $sum);
echo $result; // Output: 15
?>