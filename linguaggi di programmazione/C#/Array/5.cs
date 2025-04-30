// Scrivi un programma che definisca un array di numeri interi e trovi il valore massimo presente nell'array.

int[] numeri = { 5, 2, 8, 3, 1 };
int valoreMassimo = numeri[0];
for (int i = 1; i < numeri.Length; i++)
{
    if (numeri[i] > valoreMassimo)
    {
        valoreMassimo = numeri[i];
    }
}
Console.WriteLine("Il valore massimo nell'array è: " + valoreMassimo);