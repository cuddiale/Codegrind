// Scrivi un programma che definisca un array di interi e utilizzi un ciclo 'while' per cercare un valore specifico nell'array e stampare il risultato della ricerca.

int[] numeri = { 2, 4, 6, 8, 10 };
int valoreCercato = 6;
bool trovato = false;
int indice = 0;
while (indice < numeri.Length)
{
    if (numeri[indice] == valoreCercato)
    {
        trovato = true;
        break;
    }
    indice++;
}
if (trovato)
{
    Console.WriteLine("Il valore è presente nell'array.");
}
else
{
    Console.WriteLine("Il valore non è presente nell'array.");
}