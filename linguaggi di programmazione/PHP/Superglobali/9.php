<!-- Utilizzare la superglobale `$_GLOBALS` per accedere a una variabile globale all'interno di una funzione. -->

<?php
$nome = "Mario";

function saluta() {
    echo "Ciao, " . $GLOBALS['nome'] . "!";
}

saluta(); // Output: Ciao, Mario!
?>