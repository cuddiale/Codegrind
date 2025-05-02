// Scrivi un programma che definisca una matrice di numeri interi e ne calcoli la trasposta.

int[,] matriceOriginale = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
int[,] matriceTrasposta = new int[matriceOriginale.GetLength(1), matriceOriginale.GetLength(0)];
for (int riga = 0; riga < matriceOriginale.GetLength(0); riga++)
{
    for (int colonna = 0; colonna < matriceOriginale.GetLength(1); colonna++)
    {
        matriceTrasposta[colonna, riga] = matriceOriginale[riga, colonna];
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
Console.WriteLine("Matrice trasposta: ");
for (int riga = 0; riga < matriceTrasposta.GetLength(0); riga++)
{
    for (int colonna = 0; colonna < matriceTrasposta.GetLength(1); colonna++)
    {
        Console.Write(matriceTrasposta[riga, colonna] + " ");
    }
    Console.WriteLine();
}