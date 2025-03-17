// Scrivi un programma Java che calcola il costo di spedizione in base al peso di un pacco utilizzando il blocco "switch".

double pesoPacco = 2.5;
double costoSpedizione;

switch ((int) pesoPacco) {
    case 1:
costoSpedizione = 5.0;
break;
    case 2:
costoSpedizione = 7.5;
break;
    case 3:
costoSpedizione = 10.0;
break;
    case 4:
costoSpedizione = 12.5;
break;
    default:
costoSpedizione = 15.0;
}

System.out.println("Il costo di spedizione per un pacco di peso " + pesoPacco + " kg è di " + costoSpedizione + " euro.");