<!-- Utilizzare `try` e `catch` per gestire una divisione per zero. -->

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
    echo "Errore: " . $e->getMessage(); // Output: Errore: Divisione per zero.
}
?>