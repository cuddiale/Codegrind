// Scrivi un programma che definisca una lista di stringhe e utilizzi un ciclo 'foreach' per cercare una parola specifica nella lista. Interrompi l'esecuzione quando la parola viene trovata e stampa un messaggio di conferma.

List<string> parole = new List<string>() { "cane", "gatto", "topo", "elefante" };
string parolaCercata = "gatto";
bool trovato = false;
foreach (string parola in parole)
{
    if (parola == parolaCercata)
    {
        trovato = true;
        break;
    }
}
if (trovato)
{
    Console.WriteLine("La parola è stata trovata nella lista.");
}
else
{
    Console.WriteLine("La parola non è presente nella lista.");
}