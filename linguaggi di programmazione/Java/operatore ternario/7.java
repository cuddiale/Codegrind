// Scrivi un programma Java che calcola il prezzo scontato di un prodotto in base all'importo e al tasso di sconto utilizzando l'operatore ternario.

double importo = 100.0;
double sconto = 0.2;
double prezzoScontato = (importo - (importo * sconto) > 0) ? importo - (importo * sconto) : 0;
System.out.println("Il prezzo scontato è: " + prezzoScontato);