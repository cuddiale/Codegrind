// Scrivi un programma che definisca due array di numeri interi e li concateni in un nuovo array.

int[] array1 = { 1, 2, 3 };
int[] array2 = { 4, 5, 6 };
int[] arrayConcatenato = new int[array1.Length + array2.Length];
for (int i = 0; i < array1.Length; i++)
{
    arrayConcatenato[i] = array1[i];
}
for (int i = 0; i < array2.Length; i++)
{
    arrayConcatenato[array1.Length + i] = array2[i];
}
Console.WriteLine("Array concatenato: " + string.Join(", ", arrayConcatenato));