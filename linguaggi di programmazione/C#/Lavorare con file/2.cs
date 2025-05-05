// Scrivi un programma che crei un nuovo file di testo e vi scriva una frase specifica.

string path = "path_del_file.txt";
string frase = "Questo è il contenuto del file.";
File.WriteAllText(path, frase);
