<!-- Scrivere un programma PHP che stampa il nome di un colore corrispondente a un codice esadecimale (ad esempio, #FF0000 per il rosso) utilizzando l'istruzione "switch". -->

<?php
$codiceColore = "#00FF00";

switch ($codiceColore) {
    case "#FF0000":
        echo "Rosso";
        break;
    case "#00FF00":
        echo "Verde";
        break;
    case "#0000FF":
        echo "Blu";
        break;
    default:
        echo "Colore non riconosciuto";
}
?>
