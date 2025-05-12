<!-- Scrivere un programma PHP che stampa la stagione corrispondente a un mese utilizzando l'istruzione "switch". -->

<?php
$mese = 8;

switch ($mese) {
    case 1:
    case 2:
    case 12:
        echo "Inverno";
        break;
    case 3:
    case 4:
    case 5:
        echo "Primavera";
        break;
    case 6:
    case 7:
    case 8:
        echo "Estate";
        break;
    case 9:
    case 10:
    case 11:
        echo "Autunno";
        break;
    default:
        echo "Mese non valido";
}
?>