// Scrivi un programma Java che dichiara una variabile di tipo double chiamata "numeroDecimale" e una variabile di tipo String chiamata "numeroStringa". Esegui un cast della variabile "numeroStringa" in double e assegna il valore risultante alla variabile "numeroDecimale". Stampa il valore della variabile "numeroDecimale".

String numeroStringa = "10.5";
double numeroDecimale = Double.parseDouble(numeroStringa);
System.out.println(numeroDecimale);