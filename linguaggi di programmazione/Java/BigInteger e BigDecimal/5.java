// Confrontare due oggetti `BigInteger` utilizzando i metodi `compareTo` e `equals`.

import java.math.BigInteger;

public class ConfrontoBigInteger {
    public static void main(String[] args) {
        BigInteger a = new BigInteger("12345678901234567890");
        BigInteger b = new BigInteger("12345678901234567890");
        BigInteger c = new BigInteger("98765432109876543210");

        System.out.println("a equals b: " + a.equals(b));
        System.out.println("a compareTo b: " + a.compareTo(b));
        System.out.println("a compareTo c: " + a.compareTo(c));
    }
}