// Verificare se un ArrayList di interi è vuoto:

import java.util.ArrayList;

public class ArrayListVuoto {
    public static void main(String[] args) {
        ArrayList<Integer> numeri = new ArrayList<>();

        boolean isVuoto = numeri.isEmpty();

        System.out.println("L'ArrayList è vuoto: " + isVuoto);
    }
}
