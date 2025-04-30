// Scrivi un programma che definisca un array di stringhe e conti quante volte un valore specifico compare nell'array.

string[] nomi = { "Marco", "Francesca", "Luca", "Simona", "Luca" };
string nomeCercato = "Luca";
int conteggio = 0;
for (int i = 0; i < nomi.Length; i++)
{
    if (nomi[i] == nomeCercato)
    {
        conteggio++;
    }
}
Console.WriteLine("Il nome " + nomeCercato + " compare " + conteggio + " volte nell'array.");