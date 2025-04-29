// Scrivi un programma che definisca un dizionario di stringhe e utilizzi un ciclo 'foreach' per stampare tutte le chiavi e i relativi valori del dizionario.

Dictionary<string, string> dizionario = new Dictionary<string, string>()
{
    { "IT", "Italia" },
    { "FR", "Francia" },
    { "ES", "Spagna" },
    { "DE", "Germania" }
};
foreach (KeyValuePair<string, string> coppia in dizionario)
{
    Console.WriteLine("Chiave: " + coppia.Key + ", Valore: " + coppia.Value);
}