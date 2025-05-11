<!-- Scrivere un programma PHP per confrontare due variabili booleane e stampare il risultato del confronto. -->

<?php
$booleano1 = true;
$booleano2 = false;
$result = ($booleano1 === $booleano2);
echo $result ? "Le variabili booleane sono uguali." : "Le variabili booleane sono diverse.";
?>