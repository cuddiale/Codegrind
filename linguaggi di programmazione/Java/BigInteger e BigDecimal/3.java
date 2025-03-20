// Creare un oggetto `BigDecimal` e stamparne il valore.

import java.math.BigDecimal;

public class EsempioBigDecimal {
    public static void main(String[] args) {
        BigDecimal bigDec = new BigDecimal("12345.6789012345678901234567890");
        System.out.println("BigDecimal: " + bigDec);
    }
}