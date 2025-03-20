// Scrivere il contenuto in un file di testo:

import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;

try (BufferedWriter writer = new BufferedWriter(new FileWriter("nome_file.txt"))) {
    writer.write("Contenuto del file");
} catch (IOException e) {
    e.printStackTrace();
}