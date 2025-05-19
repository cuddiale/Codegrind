<?php
session_start();
if(isset($_SESSION['nome'])) {
    echo "Ciao, " . $_SESSION['nome'] . "!";
} else {
    echo "Sessione non impostata.";
}
?>