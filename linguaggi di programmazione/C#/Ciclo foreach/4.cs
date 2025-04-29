// Scrivi un programma che definisca una lista di stringhe e utilizzi un ciclo 'foreach' per stampare tutti gli elementi della lista.

List<string> nomi = new List<string>() { "Alice", "Bob", "Carla", "David" };
foreach (string nome in nomi)
{
    Console.WriteLine(nome);
}