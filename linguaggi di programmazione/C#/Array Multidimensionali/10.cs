// Scrivi un programma che definisca due matrici di numeri interi e ne calcoli il prodotto.


int[,] matrice1 = { { 1, 2 }, { 3, 4 } };
int[,] matrice2 = { { 5, 6 }, { 7, 8 } };
int[,] prodotto = new int[matrice1.GetLength(0), matrice2.GetLength(1)];
for (int riga = 0; riga < matrice1.GetLength(0); riga++)
{
    for (int colonna = 0; colonna < matrice2.GetLength(1); colonna++)
    {
        for (int k = 0; k < matrice1.GetLength(1); k++)
        {
            prodotto[riga, colonna] += matrice1[riga, k] * matrice2[k, colonna];
        }
    }
}
Console.WriteLine("Prodotto delle due matrici: ");
for (int riga = 0; riga < prodotto.GetLength(0); riga++)
{
    for (int colonna = 0; colonna < prodotto.GetLength(1); colonna++)
    {
        Console.Write(prodotto[riga, colonna] + " ");
    }
    Console.WriteLine();
}