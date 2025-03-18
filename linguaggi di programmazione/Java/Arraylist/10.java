// Svuotare un ArrayList di oggetti:

import java.util.ArrayList;

public class SvuotaArrayList {
    public static void main(String[] args) {
        ArrayList<Integer> numeri = new ArrayList<>();
        numeri.add(1);
        numeri.add(2);
        numeri.add(3);

        numeri.clear();

        System.out.println("L'ArrayList è stato svuotato: " + numeri);
    }
}