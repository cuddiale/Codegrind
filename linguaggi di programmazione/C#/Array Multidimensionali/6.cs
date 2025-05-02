// Scrivi un programma che definisca una matrice di numeri interi e trovi il valore minimo presente nella matrice.

int[,] matrice = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
int valoreMinimo = matrice[0, 0];
for (int riga = 0; riga < matrice.GetLength(0); riga++)
{
    for (int colonna = 0; colonna < matrice.GetLength(1); colonna++)
    {
        if (matrice[riga, colonna] < valoreMinimo)
        {
            valoreMinimo = matrice[riga, colonna];
        }
    }
}
Console.WriteLine("Il valore minimo nella matrice è: " + valoreMinimo);