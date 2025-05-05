// Scrivi un programma che verifichi se una data specifica cade in un giorno feriale o nel weekend

DateTime data = new DateTime(2023, 1, 1); // Supponiamo che sia una domenica
DayOfWeek giornoSettimana = data.DayOfWeek;

if (giornoSettimana == DayOfWeek.Saturday || giornoSettimana == DayOfWeek.Sunday)
{
    Console.WriteLine("La data cade nel weekend.");
}
else
{
    Console.WriteLine("La data cade in un giorno feriale.");
}