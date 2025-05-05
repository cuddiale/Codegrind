// Scrivi un programma che stampi solo la data corrente nel formato "dd/MM/yyyy".

DateTime today = DateTime.Today;
string formattedDate = today.ToString("dd/MM/yyyy");
Console.WriteLine("Data corrente: " + formattedDate);
