// Scrivi un programma che accetta un punteggio da 1 a 100 e utilizza un blocco 'switch' per convertirlo in una stringa descrittiva (insufficiente, sufficiente, buono, eccellente). Stampa il risultato a schermo.

Console.Write("Inserisci un punteggio da 1 a 100: ");
int punteggio = int.Parse(Console.ReadLine());
string descrizione;
switch (punteggio)
{
    case var _ when punteggio < 60:
        descrizione = "Insufficiente";
        break;
    case var _ when punteggio < 70:
        descrizione = "Sufficiente";
        break;
    case var _ when punteggio < 80:
        descrizione = "Buono";
        break;
    case var _ when punteggio < 90:
        descrizione = "Distinto";
        break;
    case var _ when punteggio <= 100:
        descrizione = "Eccellente";
        break;
    default:
        descrizione = "Punteggio non valido";
        break;
}
Console.WriteLine("Il punteggio corrisponde a: " + descrizione);