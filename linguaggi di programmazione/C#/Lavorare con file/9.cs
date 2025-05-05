// Scrivi un programma che verifichi la data dell'ultima modifica di un file specifico.

string path = "path_del_file.txt";
DateTime dataUltimaModifica = File.GetLastWriteTime(path);
Console.WriteLine("Data ultima modifica: " + dataUltimaModifica);
