// Leggere il contenuto di un file di testo:

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

try (BufferedReader reader = new BufferedReader(new FileReader("nome_file.txt"))) {
    String linea;
    while ((linea = reader.readLine()) != null) {
System.out.println(linea);
    }
} catch (IOException e) {
    e.printStackTrace();
}
