// Scrivi un programma che accetta un prezzo e uno sconto percentuale dall'utente e utilizza l'operatore ternario per calcolare il prezzo scontato. Stampa il risultato a schermo.

Console.Write("Inserisci il prezzo: ");
double prezzo = double.Parse(Console.ReadLine());
Console.Write("Inserisci lo sconto percentuale: ");
double scontoPercentuale = double.Parse(Console.ReadLine());
double prezzoScontato = (scontoPercentuale >= 0 && scontoPercentuale <= 100) ? prezzo - (prezzo * (scontoPercentuale / 100)) : prezzo;
Console.WriteLine("Il prezzo scontato è: " + prezzoScontato);