// Stampare i caratteri di una stringa uno alla volta utilizzando un ciclo "for":

public class CicloFor {
    public static void main(String[] args) {
        String testo = "Ciao!";
        for (int i = 0; i < testo.length(); i++) {
            char carattere = testo.charAt(i);
            System.out.println(carattere);
        }
    }
}
