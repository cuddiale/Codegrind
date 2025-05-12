<!-- Scrivere un programma PHP che stampa il nome di un mese corrispondente a un numero (1 per Gennaio, 2 per Febbraio, ecc.) utilizzando l'istruzione "switch". -->

<?php
$numeroMese = 6;

switch ($numeroMese) {
    case 1:
        echo "Gennaio";
        break;
    case 2:
        echo "Febbraio";
        break;
    case 3:
        echo "Marzo";
        break;
    case 4:
        echo "Aprile";
        break;
    case 5:
        echo "Maggio";
        break;
    case 6:
        echo "Giugno";
        break;
    case 7:
        echo "Luglio";
        break;
    case 8:
        echo "Agosto";
        break;
    case 9:
        echo "Settembre";
        break;
    case 10:
        echo "Ottobre";
        break;
    case 11:
        echo "Novembre";
        break;
    case 12:
        echo "Dicembre";
        break;
    default:
        echo "Numero di mese non valido";
}
?>