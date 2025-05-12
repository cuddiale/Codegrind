<!-- Scrivere un programma PHP che stampa il prezzo di un prodotto in base al suo codice utilizzando l'istruzione "switch". -->

<?php
$codiceProdotto = "A";

switch ($codiceProdotto) {
    case "A":
        echo "Il prezzo del prodotto A è 10€";
        break;
    case "B":
        echo "Il prezzo del prodotto B è 15€";
        break;
    case "C":
        echo "Il prezzo del prodotto C è 20€";
        break;
    default:
        echo "Codice prodotto non valido";
}
?>