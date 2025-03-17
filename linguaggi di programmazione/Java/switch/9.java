// Scrivi un programma Java che stampa il nome del colore corrispondente a un codice utilizzando il blocco "switch".

String codiceColore = "R";
String nomeColore;

switch (codiceColore) {
    case "R":
nomeColore = "Rosso";
break;
    case "G":
nomeColore = "Verde";
break;
    case "B":
nomeColore = "Blu";
break;
    case "Y":
nomeColore = "Giallo";
break;
    case "W":
nomeColore = "Bianco";
break;
    case "K":
nomeColore = "Nero";
break;
    default:
nomeColore = "Colore non valido";
}

System.out.println("Il codice " + codiceColore + " corrisponde al colore " + nomeColore + ".");