<!-- Scrivere un programma PHP che verifica se almeno una delle due variabili booleane è vera. -->

<?php
$booleano1 = true;
$booleano2 = false;
$result = ($booleano1 || $booleano2);
echo $result ? "Almeno una delle variabili booleane è vera." : "Entrambe le variabili booleane sono false.";
?>