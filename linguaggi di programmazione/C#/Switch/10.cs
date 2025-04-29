// Scrivi un programma che accetta un numero romano da I a X e utilizza un blocco 'switch' per convertirlo nel corrispondente numero decimale. Stampa il risultato a schermo.

Console.Write("Inserisci un numero romano da I a X: ");
string numeroRomano = Console.ReadLine().ToUpper();
int numeroDecimale;
switch (numeroRomano)
{
    case "I":
        numeroDecimale = 1;
        break;
    case "II":
        numeroDecimale = 2;
        break;
    case "III":
        numeroDecimale = 3;
        break;
    case "IV":
        numeroDecimale = 4;
        break;
    case "V":
        numeroDecimale = 5;
        break;
    case "VI":
        numeroDecimale = 6;
        break;
    case "VII":
        numeroDecimale = 7;
        break;
    case "VIII":
        numeroDecimale = 8;
        break;
    case "IX":
        numeroDecimale = 9;
        break;
    case "X":
        numeroDecimale = 10;
        break;
    default:
        numeroDecimale = -1;
        break;
}
Console.WriteLine("Il numero decimale corrispondente è: " + numeroDecimale);