// Scrivi un programma che accetta una lettera dall'utente e utilizza l'operatore ternario per determinare se è una consonante o una vocale. Stampa il risultato a schermo.

Console.Write("Inserisci una lettera: ");
char lettera = char.ToLower(Console.ReadKey().KeyChar);
string risultato = (lettera == 'a' || lettera == 'e' || lettera == 'i' || lettera == 'o' || lettera == 'u') ? "La lettera è una vocale." : "La lettera è una consonante.";
Console.WriteLine(risultato);