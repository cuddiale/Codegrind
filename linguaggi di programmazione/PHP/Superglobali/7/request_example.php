<?php
if (isset($_REQUEST['nome'])) {
    $nome = htmlspecialchars($_REQUEST['nome']);
    echo "Ciao, " . $nome . "!";
}
?>