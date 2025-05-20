<!-- Scrivi un codice PHP che utilizza una funzione di callback per eseguire un'azione su ogni elemento di un array associativo. -->

<?php
function elaboraArrayAssociativo($array, $callback) {
    foreach ($array as $key => $value) {
        $callback($key, $value);
    }
}

$printKeyValue = function($key, $value) {
    echo "$key: $value ";
};

$data = ['nome' => 'Mario', 'cognome' => 'Rossi', 'età' => 30];
elaboraArrayAssociativo($data, $printKeyValue); // Output: nome: Mario cognome: Rossi età: 30
?>