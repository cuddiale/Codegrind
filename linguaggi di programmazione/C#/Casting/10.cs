// Scrivi un programma che dichiara un'enumerazione chiamata "MesiAnno" con i mesi dell'anno come valori possibili. Successivamente, converte un valore dell'enumerazione in un intero utilizzando il casting e stampa il valore intero.

enum MesiAnno
{
    Gennaio,
    Febbraio,
    Marzo,
    Aprile,
    Maggio,
    Giugno,
    Luglio,
    Agosto,
    Settembre,
    Ottobre,
    Novembre,
    Dicembre
}

MesiAnno mese = MesiAnno.Gennaio;
int valoreIntero = (int)mese;
Console.WriteLine("Il valore intero è: " + valoreIntero);