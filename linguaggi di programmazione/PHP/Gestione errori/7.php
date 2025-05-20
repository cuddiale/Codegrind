<!-- Gestire un'eccezione e restituire un messaggio di errore in formato JSON. -->

<?php
function dividi($dividendo, $divisore) {
    if ($divisore == 0) {
        throw new Exception("Divisione per zero.");
    }
    return $dividendo / $divisore;
}

try {
    echo dividi(10, 0);
} catch (Exception $e) {
    echo json_encode(["errore" => $e->getMessage()]); // Output: {"errore":"Divisione per zero."}
}
?>