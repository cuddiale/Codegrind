// Scrivi un programma che sottragga un certo numero di ore da un'ora specifica.

DateTime ora = new DateTime(2023, 1, 1, 12, 0, 0);
int oreDaSottrarre = 2;
DateTime nuovaOra = ora.AddHours(-oreDaSottrarre);
Console.WriteLine("Nuova ora: " + nuovaOra);