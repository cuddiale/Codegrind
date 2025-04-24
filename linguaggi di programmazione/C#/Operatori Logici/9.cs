// Scrivi un programma che dichiara due variabili booleane e utilizza gli operatori logici per determinare se entrambe sono vere o entrambe sono false. Stampa il risultato a schermo.

bool valore1 = true;
bool valore2 = true;
bool entrambiVeriOFalse = (valore1 && valore2) || (!valore1 && !valore2);
Console.WriteLine("Entrambe le variabili sono vere o entrambe sono false? " + entrambiVeriOFalse);