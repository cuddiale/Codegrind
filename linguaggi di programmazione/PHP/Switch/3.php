<!-- Scrivere un programma PHP che stampa il tipo di triangolo corrispondente a tre lati (equilatero, isoscele o scaleno) utilizzando l'istruzione "switch". -->

<?php
$lato1 = 5;
$lato2 = 5;
$lato3 = 7;

switch (true) {
    case ($lato1 == $lato2 && $lato2 == $lato3):
        echo "Triangolo equilatero";
        break;
    case ($lato1 == $lato2 || $lato1 == $lato3 || $lato2 == $lato3):
        echo "Triangolo isoscele";
        break;
    default:
        echo "Triangolo scaleno";
}
?>