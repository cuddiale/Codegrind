// Scrivi un programma che definisca una lista di stringhe e utilizzi un ciclo 'while' per cercare una parola specifica nella lista e stampare il risultato della ricerca.

List<string> parole = new List<string>() { "cane", "gatto", "topo", "elefante" };
string parolaCercata = "gatto";
bool trovato = false;
int indice = 0;
while (indice < parole.Count)
{
    if (parole[indice] == parolaCercata)
    {
        trovato = true;
        break;
    }
    indice++;
}
if (trovato)
{
    Console.WriteLine("La parola è presente nella lista.");
}
else
{
    Console.WriteLine("La parola non è presente nella lista.");
}