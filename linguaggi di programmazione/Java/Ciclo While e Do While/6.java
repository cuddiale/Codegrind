// Stampare i caratteri di una stringa uno alla volta utilizzando il ciclo "while":

public class CicloWhile {
    public static void main(String[] args) {
        String testo = "Ciao!";
        int i = 0;
        while (i < testo.length()) {
            char carattere = testo.charAt(i);
            System.out.println(carattere);
            i++;
        }
    }
}
