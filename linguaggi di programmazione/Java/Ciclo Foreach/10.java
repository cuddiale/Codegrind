// Stampare gli elementi di una mappa utilizzando il ciclo "foreach":

import java.util.HashMap;
import java.util.Map;

public class CicloForEach {
    public static void main(String[] args) {
        Map<Integer, String> studenti = new HashMap<>();
        studenti.put(1, "Mario");
        studenti.put(2, "Luca");
        studenti.put(3, "Anna");
        for (Map.Entry<Integer, String> entry : studenti.entrySet()) {
            System.out.println(entry.getKey() + " - " + entry.getValue());
        }
    }
}