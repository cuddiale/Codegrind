// Scrivi un programma che aggiunga una nuova riga a un file di testo esistente.

string path = "path_del_file.txt";
string nuovaRiga = "Questa è una nuova riga.";
File.AppendAllText(path, nuovaRiga);
