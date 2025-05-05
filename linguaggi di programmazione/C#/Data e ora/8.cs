// Scrivi un programma che stampi il nome del giorno della settimana corrente.

DateTime now = DateTime.Now;
string nomeGiorno = now.ToString("dddd", new CultureInfo("it-IT"));
Console.WriteLine("Giorno della settimana: " + nomeGiorno);