// Eliminare un file:

import java.io.File;

File file = new File("nome_file.txt");

if (file.delete()) {
    System.out.println("Il file è stato eliminato.");
} else {
    System.out.println("Impossibile eliminare il file.");
}