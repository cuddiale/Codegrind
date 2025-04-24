// Scrivi un programma che dichiara tre variabili booleane e utilizza gli operatori logici per determinare se almeno una di esse è vera e le altre due sono false. Stampa il risultato a schermo.

bool valore1 = true;
bool valore2 = false;
bool valore3 = false;
bool unoVeroDueFalsi = (valore1 && !valore2 && !valore3) || (!valore1 && valore2 && !valore3) || (!valore1 && !valore2 && valore3);
Console.WriteLine("Una delle variabili è vera e le altre due sono false? " + unoVeroDueFalsi);