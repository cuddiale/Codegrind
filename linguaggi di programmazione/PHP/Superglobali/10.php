<!-- Utilizzare la superglobale `$_SESSION` per contare quante volte un utente ha visitato una pagina. -->

<?php
session_start();

if(isset($_SESSION['visite'])) {
    $_SESSION['visite']++;
} else {
    $_SESSION['visite'] = 1;
}

echo "Numero di visite: " . $_SESSION['visite'];
?>