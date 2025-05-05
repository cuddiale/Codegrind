// Scrivi un programma che calcoli l'età di una persona data la sua data di nascita.

DateTime dataNascita = new DateTime(1990, 1, 1);
DateTime oggi = DateTime.Today;
int eta = oggi.Year - dataNascita.Year;

if (oggi < dataNascita.AddYears(eta))
{
    eta--;
}

Console.WriteLine("Età: " + eta + " anni.");