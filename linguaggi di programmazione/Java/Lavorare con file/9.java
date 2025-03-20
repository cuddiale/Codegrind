// Leggere il contenuto di una directory ricorsivamente:

import java.io.File;

File directory = new File("directory");
leggiContenutoRicorsivo(directory);

private static void leggiContenutoRicorsivo(File file) {
    if (file.isDirectory()) {
        File[] files = file.listFiles();
        if (files != null) {
    for (File f : files) {
        leggiContenutoRicorsivo(f);
    }
        }
    } else {
        System.out.println(file.getName());
    }
}