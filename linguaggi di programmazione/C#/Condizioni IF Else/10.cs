// Scrivi un programma che accetta un prezzo e uno sconto percentuale dall'utente e utilizza un'istruzione 'if-else' per calcolare il prezzo scontato. Stampa il risultato a schermo.

Console.Write("Inserisci il prezzo: ");
double prezzo = double.Parse(Console.ReadLine());
Console.Write("Inserisci lo sconto percentuale: ");
double scontoPercentuale = double.Parse(Console.ReadLine());
if (scontoPercentuale >= 0 && scontoPercentuale <= 100)
{
    double sconto = prezzo * (scontoPercentuale / 100);
    double prezzoScontato = prezzo - sconto;
    Console.WriteLine("Il prezzo scontato è: " + prezzoScontato);
}
else
{
    Console.WriteLine("Sconto non valido.");
}