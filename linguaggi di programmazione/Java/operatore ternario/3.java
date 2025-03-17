// Scrivi un programma Java che verifica se un anno è bisestile utilizzando l'operatore ternario.

int anno = 2020;
String risultato = (anno % 4 == 0 && (anno % 100 != 0 || anno % 400 == 0)) ? "L'anno è bisestile." : "L'anno non è bisestile.";
System.out.println(risultato);