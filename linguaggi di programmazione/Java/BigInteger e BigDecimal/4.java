// Eseguire addizione, sottrazione, moltiplicazione e divisione con `BigDecimal`.

import java.math.BigDecimal;

public class OperazioniBigDecimal {
    public static void main(String[] args) {
        BigDecimal a = new BigDecimal("12345.6789");
        BigDecimal b = new BigDecimal("98765.4321");

        BigDecimal somma = a.add(b);
        BigDecimal differenza = a.subtract(b);
        BigDecimal prodotto = a.multiply(b);
        BigDecimal quoziente = a.divide(b, BigDecimal.ROUND_HALF_UP);

        System.out.println("Somma: " + somma);
        System.out.println("Differenza: " + differenza);
        System.out.println("Prodotto: " + prodotto);
        System.out.println("Quoziente: " + quoziente);
    }
}