<!-- Scrivere un programma PHP che dichiara un array indicizzato vuoto, aggiunge elementi ad esso utilizzando l'operatore di assegnazione e lo stampa. -->

<?php
$emptyArray = [];

$emptyArray[0] = "Primo elemento";
$emptyArray[1] = "Secondo elemento";

for ($i = 0; $i < count($emptyArray); $i++) {
    echo $emptyArray[$i] . " ";
}
?>
