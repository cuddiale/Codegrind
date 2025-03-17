// Scrivi un programma Java che verifichi se un numero intero è compreso tra due valori specifici.

int numero = 15;
int limiteInferiore = 10;
int limiteSuperiore = 20;
boolean compreso = numero > limiteInferiore && numero < limiteSuperiore;
System.out.println("Il numero è compreso tra " + limiteInferiore + " e " + limiteSuperiore + "? " + compreso);