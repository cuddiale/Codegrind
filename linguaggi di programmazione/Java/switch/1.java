// Scrivi un programma Java che stampa il nome del giorno della settimana corrispondente a un numero utilizzando il blocco "switch".

int numeroGiorno = 1;
String nomeGiorno;

switch (numeroGiorno) {
    case 1:
nomeGiorno = "Lunedì";
break;
    case 2:
nomeGiorno = "Martedì";
break;
    case 3:
nomeGiorno = "Mercoledì";
break;
    case 4:
nomeGiorno = "Giovedì";
break;
    case 5:
nomeGiorno = "Venerdì";
break;
    case 6:
nomeGiorno = "Sabato";
break;
    case 7:
nomeGiorno = "Domenica";
break;
    default:
nomeGiorno = "Numero non valido";
}

System.out.println("Il numero " + numeroGiorno + " corrisponde a " + nomeGiorno + ".");