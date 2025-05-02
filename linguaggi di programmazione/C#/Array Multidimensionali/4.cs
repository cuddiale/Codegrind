// Scrivi un programma che definisca una matrice di interi e crei una copia della matrice originale in una nuova matrice.

int[,] matriceOriginale = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
int[,] matriceCopia = new int[matriceOriginale.GetLength(0), matriceOriginale.GetLength(1)];
for (int riga = 0; riga < matriceOriginale.GetLength(0); riga++)
{
    for (int colonna = 0; colonna < matriceOriginale.GetLength(1); colonna++)
    {
        matriceCopia[riga, colonna] = matriceOriginale[riga, colonna];
    }
}
Console.WriteLine("Matrice originale: ");
for (int riga = 0; riga < matriceOriginale.GetLength(0); riga++)
{
    for (int colonna = 0; colonna < matriceOriginale.GetLength(1); colonna++)
    {
        Console.Write(matriceOriginale[riga, colonna] + " ");
    }
    Console.WriteLine();
}
Console.WriteLine("Matrice copia: ");
for (int riga = 0; riga < matriceCopia.GetLength(0); riga++)
{
    for (int colonna = 0; colonna < matriceCopia.GetLength(1); colonna++)
    {
        Console.Write(matriceCopia[riga, colonna] + " ");
    }
    Console.WriteLine();
}