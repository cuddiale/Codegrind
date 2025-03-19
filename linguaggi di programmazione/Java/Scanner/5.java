// Utilizzare la classe `Scanner` per leggere il contenuto di un file di testo e stamparlo riga per riga.

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class LetturaFile {
    public static void main(String[] args) {
        try {
            File file = new File("testo.txt");
            Scanner scanner = new Scanner(file);
            while (scanner.hasNextLine()) {
                String linea = scanner.nextLine();
                System.out.println(linea);
            }
            scanner.close();
        } catch (FileNotFoundException e) {
            System.out.println("File non trovato: " + e.getMessage());
        }
    }
}