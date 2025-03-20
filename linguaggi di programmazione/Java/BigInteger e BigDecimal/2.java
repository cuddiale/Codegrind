// Eseguire addizione, sottrazione, moltiplicazione e divisione con `BigInteger`.

import java.math.BigInteger;

public class OperazioniBigInteger {
    public static void main(String[] args) {
        BigInteger a = new BigInteger("12345678901234567890");
        BigInteger b = new BigInteger("98765432109876543210");

        BigInteger somma = a.add(b);
        BigInteger differenza = a.subtract(b);
        BigInteger prodotto = a.multiply(b);
        BigInteger quoziente = a.divide(b);

        System.out.println("Somma: " + somma);
        System.out.println("Differenza: " + differenza);
        System.out.println("Prodotto: " + prodotto);
        System.out.println("Quoziente: " + quoziente);
    }
}