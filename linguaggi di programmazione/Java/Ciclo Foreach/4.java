// Contare il numero di vocali in una stringa utilizzando il ciclo "foreach":

public class CicloForEach {
    public static void main(String[] args) {
        String testo = "Ciao mondo!";
        int conteggioVocali = 0;
        for (char carattere : testo.toCharArray()) {
            if (Character.toLowerCase(carattere) == 'a' || Character.toLowerCase(carattere) == 'e' ||
                    Character.toLowerCase(carattere) == 'i' || Character.toLowerCase(carattere) == 'o' ||
                    Character.toLowerCase(carattere) == 'u') {
                conteggioVocali++;
            }
        }
        System.out.println("Il numero di vocali nella stringa è: " + conteggioVocali);
    }
}
