// Scrivi un programma Java che verifica se un carattere è una lettera maiuscola o una lettera minuscola.

char carattere = 'A';
if (Character.isUpperCase(carattere)) {
    System.out.println("Il carattere è una lettera maiuscola.");
} else if (Character.isLowerCase(carattere)) {
    System.out.println("Il carattere è una lettera minuscola.");
} else {
    System.out.println("Il carattere non è una lettera.");
}