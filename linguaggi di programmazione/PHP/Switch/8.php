<!-- Scrivere un programma PHP che stampa il tipo di veicolo corrispondente a una targa (ad esempio, "AB 123 CD" per una macchina) utilizzando l'istruzione "switch". -->

<?php
$targa = "AB 123 CD";

$tipoVeicolo = substr($targa, 0, 2);

switch ($tipoVeicolo) {
    case "AB":
        echo "Automobile";
        break;
    case "BC":
        echo "Camion";
        break;
    case "CD":
        echo "Motociclo";
        break;
    default:
        echo "Tipo di veicolo non riconosciuto";
}
?>