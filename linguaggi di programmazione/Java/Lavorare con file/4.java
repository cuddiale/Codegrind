// Verificare l'esistenza di un file:

import java.io.File;

File file = new File("nome_file.txt");

if (file.exists()) {
    System.out.println("Il file esiste.");
} else {
    System.out.println("Il file non esiste.");
}