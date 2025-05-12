<!-- Scrivere un programma PHP che stampa il giorno della settimana corrispondente a un numero (1 per Lunedì, 2 per Martedì, ecc.) utilizzando l'istruzione "switch". -->

<?php
$numeroGiorno = 3;

switch ($numeroGiorno) {
    case 1:
        echo "Lunedì";
        break;
    case 2:
        echo "Martedì";
        break;
    case 3:
        echo "Mercoledì";
        break;
    case 4:
        echo "Giovedì";
        break;
    case 5:
        echo "Venerdì";
        break;
    case 6:
        echo "Sabato";
        break;
    case 7:
        echo "Domenica";
        break;
    default:
        echo "Numero di giorno non valido";
}
?>