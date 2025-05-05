// Scrivi un programma che legga tutte le righe di un file di testo e le stampi a schermo.

string path = "path_del_file.txt";
string[] righe = File.ReadAllLines(path);

foreach (string riga in righe)
{
    Console.WriteLine(riga);
}