// Scrivi un programma che accetta un codice identificativo di un prodotto e utilizza un blocco 'switch' per determinare l'aliquota IVA corrispondente. Stampa il risultato a schermo.

Console.Write("Inserisci il codice identificativo del prodotto: ");
string codice = Console.ReadLine();
double aliquotaIVA;
switch (codice)
{
    case "A":
        aliquotaIVA = 0.22;
        break;
    case "B":
        aliquotaIVA = 0.10;
        break;
    case "C":
        aliquotaIVA = 0.04;
        break;
    default:
        aliquotaIVA = 0.00;
        break;
}
Console.WriteLine("L'aliquota IVA corrispondente è: " + (aliquotaIVA * 100) + "%");