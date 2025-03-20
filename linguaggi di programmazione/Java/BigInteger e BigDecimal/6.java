// Confrontare due oggetti `BigDecimal` utilizzando i metodi `compareTo` e `equals`.

import java.math.BigDecimal;

public class ConfrontoBigDecimal {
    public static void main(String[] args) {
        BigDecimal a = new BigDecimal("12345.6789");
        BigDecimal b = new BigDecimal("12345.6789");
        BigDecimal c = new BigDecimal("98765.4321");

        System.out.println("a equals b: " + a.equals(b));
        System.out.println("a compareTo b: " + a.compareTo(b));
        System.out.println("a compareTo c: " + a.compareTo(c));
    }
}