<!-- Scrivi un codice PHP che utilizza una funzione di callback per ordinare un array. -->

<?php
function ordinaArray($array, $callback) {
    usort($array, $callback);
    return $array;
}

$compare = function($a, $b) {
    return $a - $b;
};

$numbers = [5, 2, 4, 1, 3];
$result = ordinaArray($numbers, $compare);
print_r($result); // Output: Array([0] => 1 [1] => 2 [2] => 3 [3] => 4 [4] => 5)
?>