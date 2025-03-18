// Stampare le lettere di una stringa, interrompendo il ciclo quando si raggiunge la lettera 'o' utilizzando "break":

public class BreakExample {
    public static void main(String[] args) {
        String testo = "Ciao mondo!";
        for (char carattere : testo.toCharArray()) {
            if (carattere == 'o') {
                break;
            }
            System.out.println(carattere);
        }
    }
}