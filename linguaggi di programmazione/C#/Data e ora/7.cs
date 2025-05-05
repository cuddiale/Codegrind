// Scrivi un programma che calcoli la differenza di tempo tra due istanti specifici in ore.

DateTime istante1 = new DateTime(2023, 1, 1, 10, 0, 0);
DateTime istante2 = new DateTime(2023, 1, 1, 14, 30, 0);
TimeSpan differenza = istante2 - istante1;
double ore = differenza.TotalHours;
Console.WriteLine("Differenza in ore: " + ore);