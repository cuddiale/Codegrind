<!-- Scrivi un codice PHP che utilizza una funzione di callback per eseguire una manipolazione su un array. -->

<?php
function manipolaArray($array, $callback) {
    return $callback($array);
}

$double = function($arr) {
    $result = [];
    foreach ($arr as $value) {
        $result[] = $value * 2;
    }
    return $result;
};

$numbers = [1, 2, 3, 4, 5];
$result = manipolaArray($numbers, $double);
print_r($result); // Output: Array([0] => 2 [1] => 4 [2] => 6 [3] => 8 [4] => 10)
?>
