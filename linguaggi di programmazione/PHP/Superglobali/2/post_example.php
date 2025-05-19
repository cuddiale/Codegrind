<?php
if (isset($_POST['nome'])) {
    $nome = htmlspecialchars($_POST['nome']);
    echo "Ciao, " . $nome . "!";
}
?>