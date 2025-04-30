// Scrivi un programma che definisca un array di stringhe e cerchi un valore specifico nell'array. Stampa un messaggio se il valore viene trovato o se non viene trovato.

string[] nomi = { "Marco", "Francesca", "Luca", "Simona" };
string nomeCercato = "Luca";
bool trovato = false;
for (int i = 0; i < nomi.Length; i++)
{
    if (nomi[i] == nomeCercato)
    {
        trovato = true;
        break;
    }
}
if (trovato)
{
    Console.WriteLine("Il nome è stato trovato nell'array.");
}
else
{
    Console.WriteLine("Il nome non è presente nell'array.");
}