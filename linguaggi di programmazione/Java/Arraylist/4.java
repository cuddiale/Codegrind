// Copiare gli elementi di un ArrayList in un nuovo ArrayList:

import java.util.ArrayList;

public class CopiaArrayList {
    public static void main(String[] args) {
        ArrayList<Integer> numeri1 = new ArrayList<>();
        numeri1.add(1);
        numeri1.add(2);
        numeri1.add(3);

        ArrayList<Integer> numeri2 = new ArrayList<>(numeri1);

        System.out.println("Numeri1: " + numeri1);
        System.out.println("Numeri2: " + numeri2);
    }
}