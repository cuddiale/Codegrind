// Scrivi un programma che calcoli la differenza tra due date in giorni.

DateTime data1 = new DateTime(2023, 1, 1);
DateTime data2 = new DateTime(2023, 2, 1);
TimeSpan differenza = data2 - data1;
int giorni = differenza.Days;
Console.WriteLine("Differenza in giorni: " + giorni);