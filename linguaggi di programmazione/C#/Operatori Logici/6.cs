// Scrivi un programma che dichiara due variabili booleane e utilizza gli operatori logici per determinare se almeno una di esse è vera e l'altra è falsa. Stampa il risultato a schermo.

bool valore1 = true;
bool valore2 = false;
bool unoVeroUnoFalso = (valore1 && !valore2) || (!valore1 && valore2);
Console.WriteLine("Uno dei valori è vero e l'altro è falso? " + unoVeroUnoFalso);