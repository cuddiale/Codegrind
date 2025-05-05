// Scrivi un programma che verifichi se un file specifico esiste o meno.

string path = "path_del_file.txt";
bool fileEsiste = File.Exists(path);
Console.WriteLine("Il file esiste? " + fileEsiste);
