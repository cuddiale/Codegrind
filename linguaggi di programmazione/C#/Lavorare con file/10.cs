// Scrivi un programma che legga il contenuto di un file binario e lo stampi a schermo.

string path = "path_del_file.bin";
byte[] contenuto = File.ReadAllBytes(path);

foreach (byte b in contenuto)
{
    Console.Write(b + " ");
}
