// Scrivi un programma che definisca un array di interi e crei una copia dell'array originale in un nuovo array.

int[] arrayOriginale = { 1, 2, 3, 4, 5 };
int[] arrayCopia = new int[arrayOriginale.Length];
for (int i = 0; i < arrayOriginale.Length; i++)
{
    arrayCopia[i] = arrayOriginale[i];
}
Console.WriteLine("Array originale: " + string.Join(", ", arrayOriginale));
Console.WriteLine("Array copia: " + string.Join(", ", arrayCopia));