// Scrivi un programma che definisca una matrice di numeri interi e trovi il valore massimo per ogni riga della matrice.

int[,] matrice = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
for (int riga = 0; riga < matrice.GetLength(0); riga++)
{
    int valoreMassimo = matrice[riga, 0];
    for (int colonna = 1; colonna < matrice.GetLength(1); colonna++)
    {
        if (matrice[riga, colonna] > valoreMassimo)
        {
            valoreMassimo = matrice[riga, colonna];
        }
    }
    Console.WriteLine("Il valore massimo nella riga " + riga + " è: " + valoreMassimo);
}