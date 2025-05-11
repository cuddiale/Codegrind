<!-- Scrivere un programma PHP che verifica se entrambe le variabili booleane sono false. -->

<?php
$booleano1 = false;
$booleano2 = false;
$result = (!$booleano1 && !$booleano2);
echo $result ? "Entrambe le variabili booleane sono false." : "Almeno una delle variabili booleane è vera.";
?>