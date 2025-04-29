// Scrivi un programma che accetta un numero intero da 1 a 12 e utilizza un blocco 'switch' per convertirlo nel corrispondente nome del mese. Stampa il risultato a schermo.

Console.Write("Inserisci un numero da 1 a 12: ");
int numero = int.Parse(Console.ReadLine());
string mese;
switch (numero)
{
    case 1:
        mese = "Gennaio";
        break;
    case 2:
        mese = "Febbraio";
        break;
    case 3:
        mese = "Marzo";
        break;
    case 4:
        mese = "Aprile";
        break;
    case 5:
        mese = "Maggio";
        break;
    case 6:
        mese = "Giugno";
        break;
    case 7:
        mese = "Luglio";
        break;
    case 8:
        mese = "Agosto";
        break;
    case 9:
        mese = "Settembre";
        break;
    case 10:
        mese = "Ottobre";
        break;
    case 11:
        mese = "Novembre";
        break;
    case 12:
        mese = "Dicembre";
        break;
    default:
        mese = "Numero non valido";
        break;
}
Console.WriteLine("Il mese corrispondente è: " + mese);