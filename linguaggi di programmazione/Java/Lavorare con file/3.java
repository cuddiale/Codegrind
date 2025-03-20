// Copiare un file in un altro file:

import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;

try (FileInputStream fis = new FileInputStream("file_origine.txt");
     FileOutputStream fos = new FileOutputStream("file_destinazione.txt")) {
    byte[] buffer = new byte[1024];
    int bytesRead;
    while ((bytesRead = fis.read(buffer)) != -1) {
fos.write(buffer, 0, bytesRead);
    }
} catch (IOException e) {
    e.printStackTrace();
}