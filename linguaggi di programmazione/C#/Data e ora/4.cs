// Scrivi un programma che aggiunga un certo numero di giorni a una data specifica.

DateTime data = new DateTime(2023, 1, 1);
int giorniDaAggiungere = 10;
DateTime nuovaData = data.AddDays(giorniDaAggiungere);
Console.WriteLine("Nuova data: " + nuovaData);