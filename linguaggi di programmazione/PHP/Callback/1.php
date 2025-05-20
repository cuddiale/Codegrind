<!-- Scrivi un codice PHP che utilizza una funzione di callback per eseguire un'operazione matematica. -->

<?php
function operazioneMatematica($numero1, $numero2, $callback) {
    return $callback($numero1, $numero2);
}

$somma = function($a, $b) {
    return $a + $b;
};

echo operazioneMatematica(5, 3, $somma); // Output: 8
?>
