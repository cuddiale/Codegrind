// Scrivi un programma che legga il contenuto di un file di testo e lo stampi a schermo.

string path = "path_del_file.txt";
string contenuto = File.ReadAllText(path);
Console.WriteLine(contenuto);
