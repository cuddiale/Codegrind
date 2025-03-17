// Scrivi un programma Java che dichiara una variabile di tipo long chiamata "numeroLungo" e una variabile di tipo int chiamata "numeroIntero". Esegui un cast della variabile "numeroLungo" in int e assegna il valore risultante alla variabile "numeroIntero". Stampa il valore della variabile "numeroIntero".

long numeroLungo = 10000000000L;
int numeroIntero = (int) numeroLungo;
System.out.println(numeroIntero);