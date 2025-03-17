// Stampare gli elementi di una lista di stringhe utilizzando il ciclo "foreach":

import java.util.ArrayList;
import java.util.List;

public class CicloForEach {
    public static void main(String[] args) {
        List<String> parole = new ArrayList<>();
        parole.add("Ciao");
        parole.add("Mondo");
        parole.add("Java");
        for (String parola : parole) {
            System.out.println(parola);
        }
    }
}
