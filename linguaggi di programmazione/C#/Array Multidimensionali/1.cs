// Scrivi un programma che definisca una matrice di interi e calcoli la somma di tutti gli elementi della matrice.

int[,] matrice = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
int somma = 0;
for (int riga = 0; riga < matrice.GetLength(0); riga++)
{
    for (int colonna = 0; colonna < matrice.GetLength(1); colonna++)
    {
        somma += matrice[riga, colonna];
    }
}
Console.WriteLine("La somma degli elementi della matrice è: " + somma);