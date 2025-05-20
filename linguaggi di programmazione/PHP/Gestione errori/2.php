<!-- Utilizzare `try`, `catch` e `finally` per eseguire del codice indipendentemente dal fatto che si verifichi un'eccezione. -->

<?php
function dividi($dividendo, $divisore) {
    if ($divisore == 0) {
        throw new Exception("Divisione per zero.");
    }
    return $dividendo / $divisore;
}

try {
    echo dividi(10, 2); // Output: 5
} catch (Exception $e) {
    echo "Errore: " . $e->getMessage();
} finally {
    echo " Questo viene eseguito comunque."; // Output: Questo viene eseguito comunque.
}
?>