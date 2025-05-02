// Scrivi un programma che definisca una matrice di interi e cerchi un valore specifico nella matrice. Stampa un messaggio se il valore viene trovato o se non viene trovato.

int[,] matrice = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
int valoreCercato = 5;
bool trovato = false;
for (int riga = 0; riga < matrice.GetLength(0); riga++)
{
    for (int colonna = 0; colonna < matrice.GetLength(1); colonna++)
    {
        if (matrice[riga, colonna] == valoreCercato)
        {
            trovato = true;
            break;
        }
    }
    if (trovato)
    {
        break;
    }
}
if (trovato)
{
    Console.WriteLine("Il valore è stato trovato nella matrice.");
}
else
{
    Console.WriteLine("Il valore non è presente nella matrice.");
}