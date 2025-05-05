// Scrivi un programma che verifichi se un anno specifico è bisestile.

int anno = 2024;
bool isBisestile = DateTime.IsLeapYear(anno);
Console.WriteLine("L'anno " + anno + " è bisestile? " + isBisestile);