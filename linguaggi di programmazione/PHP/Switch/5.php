<!-- Scrivere un programma PHP che stampa il livello di importanza di un messaggio (basso, medio o alto) utilizzando l'istruzione "switch". -->

<?php
$livelloMessaggio = "medio";

switch ($livelloMessaggio) {
    case "basso":
        echo "Il messaggio ha un livello di importanza basso";
        break;
    case "medio":
        echo "Il messaggio ha un livello di importanza medio";
        break;
    case "alto":
        echo "Il messaggio ha un livello di importanza alto";
        break;
    default:
        echo "Livello di importanza non valido";
}
?>