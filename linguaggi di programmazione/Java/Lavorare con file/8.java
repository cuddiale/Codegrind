// Rinominare un file:

import java.io.File;

File file = new File("nome_file.txt");
File nuovoNome = new File("nuovo_nome.txt");

if (file.renameTo(nuovoNome)) {
    System.out.println("Il file è stato rinominato.");
} else {
    System.out.println("Impossibile rinominare il file.");
}