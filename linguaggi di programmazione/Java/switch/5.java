// Scrivi un programma Java che converte un numero romano in decimale utilizzando il blocco "switch".

String numeroRomano = "V";
int numeroDecimale;

switch (numeroRomano) {
    case "I":
numeroDecimale = 1;
break;
    case "V":
numeroDecimale = 5;
break;
    case "X":
numeroDecimale = 10;
break;
    case "L":
numeroDecimale = 50;
break;
    case "C":
numeroDecimale = 100;
break;
    case "D":
numeroDecimale = 500;
break;
    case "M":
numeroDecimale = 1000;
break;
    default:
numeroDecimale = -1;
}

System.out.println("Il numero romano " + numeroRomano + " corrisponde al numero decimale " + numeroDecimale + ".");