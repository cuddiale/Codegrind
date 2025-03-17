// Scrivi un programma Java che calcola il prezzo di un prodotto in base al codice utilizzando il blocco "switch".

String codiceProdotto = "A";
double prezzoProdotto;

switch (codiceProdotto) {
    case "A":
prezzoProdotto = 10.0;
break;
    case "B":
prezzoProdotto = 15.0;
break;
    case "C":
prezzoProdotto = 20.0;
break;
    case "D":
prezzoProdotto = 25.0;
break;
    case "E":
prezzoProdotto = 30.0;
break;
    default:
prezzoProdotto = 0.0;
}

System.out.println("Il prezzo del prodotto con codice " + codiceProdotto + " è di " + prezzoProdotto + " euro.");