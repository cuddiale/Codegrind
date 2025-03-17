// Scrivi un programma Java che stampa il numero romano corrispondente a un numero decimale utilizzando il blocco "switch".

int numeroDecimale = 9;
String numeroRomano;

switch (numeroDecimale) {
    case 1:
numeroRomano = "I";
break;
    case 2:
numeroRomano = "II";
break;
    case 3:
numeroRomano = "III";
break;
    case 4:
numeroRomano = "IV";
break;
    case 5:
numeroRomano = "V";
break;
    case 6:
numeroRomano = "VI";
break;
    case 7:
numeroRomano = "VII";
break;
    case 8:
numeroRomano = "VIII";
break;
    case 9:
numeroRomano = "IX";
break;
    case 10:
numeroRomano = "X";
break;
    default:
numeroRomano = "Numero non valido";
}

System.out.println("Il numero decimale " + numeroDecimale + " corrisponde al numero romano " + numeroRomano + ".");