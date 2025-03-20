// Elencare i file in una directory:

import java.io.File;

File directory = new File("directory");

if (directory.isDirectory()) {
    File[] files = directory.listFiles();
    if (files != null) {
for (File file : files) {
    System.out.println(file.getName());
}
    }
}
