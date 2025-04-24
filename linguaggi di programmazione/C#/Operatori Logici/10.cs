// Scrivi un programma in C# che dichiari tre variabili booleane (valore1, valore2, valore3) con valori iniziali arbitrari (vero o falso). Utilizza gli operatori logici per determinare se almeno due delle variabili sono vere (true) o se almeno due sono false (false). Stampa il risultato della condizione verificata a schermo.

bool valore1 = true;
bool valore2 = false;
bool valore3 = false;
bool almenoDueVeriODueFalsi = (valore1 && valore2 && !valore3) || (!valore1 && valore2 && valore3) || (valore1 && !valore2 && valore3);
Console.WriteLine("Almeno due delle variabili sono vere o almeno due sono false? " + almenoDueVeriODueFalsi);