// Creare una nuova directory:

import java.io.File;

File directory = new File("nuova_directory");

if (directory.mkdir()) {
    System.out.println("La directory è stata creata.");
} else {
    System.out.println("Impossibile creare la directory.");
}