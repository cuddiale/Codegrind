<!-- Scrivi un codice PHP che utilizza una funzione di callback per filtrare un array. -->

<?php
function filtraArray($array, $callback) {
    return array_filter($array, $callback);
}

$even = function($value) {
    return $value % 2 === 0;
};

$numbers = [1, 2, 3, 4, 5];
$result = filtraArray($numbers, $even);
print_r($result); // Output: Array([1] => 2 [3] => 4)
?>