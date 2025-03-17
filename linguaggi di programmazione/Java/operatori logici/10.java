// Scrivi un programma Java che verifichi se un carattere è una consonante minuscola.

char carattere = 'g';
boolean consonanteMinuscola = carattere >= 'a' && carattere <= 'z' && carattere != 'a' && carattere != 'e' && carattere != 'i' && carattere != 'o' && carattere != 'u';
System.out.println("Il carattere è una consonante minuscola? " + consonanteMinuscola);
