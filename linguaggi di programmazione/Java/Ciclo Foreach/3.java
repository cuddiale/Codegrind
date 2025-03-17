// Stampare le lettere di una stringa utilizzando il ciclo "foreach":

public class CicloForEach {
    public static void main(String[] args) {
        String testo = "Ciao!";
        for (char carattere : testo.toCharArray()) {
            System.out.println(carattere);
        }
    }
}