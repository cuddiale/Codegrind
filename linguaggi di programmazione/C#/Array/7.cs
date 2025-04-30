// Scrivi un programma che definisca una lista di numeri interi e trovi il valore minimo presente nella lista.

List<int> numeri = new List<int>() { 5, 2, 8, 3, 1 };
int valoreMinimo = numeri[0];
for (int i = 1; i < numeri.Count; i++)
{
    if (numeri[i] < valoreMinimo)
    {
        valoreMinimo = numeri[i];
    }
}
Console.WriteLine("Il valore minimo nella lista è: " + valoreMinimo);