// Scrivi un programma che accetta un numero intero da 1 a 12 corrispondente a un mese e utilizza un blocco 'switch' per determinare il numero di giorni in quel mese. Stampa il risultato a schermo.

Console.Write("Inserisci un numero da 1 a 12: ");
int numero = int.Parse(Console.ReadLine());
int giorni;
switch (numero)
{
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        giorni = 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        giorni = 30;
        break;
    case 2:
        giorni = 28;
        break;
    default:
        giorni = -1;
        break;
}
Console.WriteLine("Il mese corrisponde a " + giorni + " giorni");