// Scrivi un programma che definisca una matrice di numeri interi e calcoli la media di tutti gli elementi della matrice.

int[,] matrice = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
int somma = 0;
for (int riga = 0; riga < matrice.GetLength(0); riga++)
{
    for (int colonna = 0; colonna < matrice.GetLength(1); colonna++)
    {
        somma += matrice[riga, colonna];
    }
}
double media = (double)somma / (matrice.GetLength(0) * matrice.GetLength(1));
Console.WriteLine("La media degli elementi della matrice è: " + media);