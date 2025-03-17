// Scrivi un programma Java che determina il valore minimo tra tre numeri utilizzando l'operatore ternario.

int numero1 = 10;
int numero2 = 15;
int numero3 = 8;
int valoreMinimo = (numero1 < numero2) ? (numero1 < numero3) ? numero1 : numero3 : (numero2 < numero3) ? numero2 : numero3;
System.out.println("Il valore minimo è: " + valoreMinimo);