// Ottenere le informazioni di un file:

import java.io.File;

File file = new File("nome_file.txt");

if (file.exists()) {
    System.out.println("Nome file: " + file.getName());
    System.out.println("Percorso assoluto: " + file.getAbsolutePath());
    System.out.println("Dimensione: " + file.length() + " byte");
    System.out.println("Ultima modifica: " + file.lastModified());
} else {
    System.out.println("Il file non esiste.");
}