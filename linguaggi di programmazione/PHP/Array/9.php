<!-- Scrivere un programma PHP che dichiara due array indicizzati di numeri interi e li stampa a schermo in un unico array utilizzando l'operatore di concatenazione. -->

<?php
$numbers1 = [1, 2, 3];
$numbers2 = [4, 5, 6];

$combined = $numbers1 + $numbers2;

for ($i = 0; $i < count($combined); $i++) {
    echo $combined[$i] . " ";
}
?>