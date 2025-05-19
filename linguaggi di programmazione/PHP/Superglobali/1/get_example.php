<?php
if (isset($_GET['nome'])) {
    $nome = htmlspecialchars($_GET['nome']);
    echo "Ciao, " . $nome . "!";
}
?>