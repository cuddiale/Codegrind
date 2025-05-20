<!-- Scrivi un codice PHP che utilizza una funzione di callback per eseguire un'azione su ogni elemento di un array. -->

<?php
function elaboraArray($array, $callback) {
    foreach ($array as $element) {
        $callback($element);
    }
}

$print = function($value) {
    echo $value . ' ';
};

$numbers = [1, 2, 3, 4, 5];
elaboraArray($numbers, $print); // Output: 1 2 3 4 5
?>