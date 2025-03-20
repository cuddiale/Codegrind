// Convertire un oggetto `BigInteger` in `BigDecimal` e viceversa.

import java.math.BigInteger;
import java.math.BigDecimal;

public class ConversioneBigIntegerBigDecimal {
    public static void main(String[] args) {
        BigInteger bigInt = new BigInteger("12345678901234567890");
        BigDecimal bigDec = new BigDecimal(bigInt);
        System.out.println("BigDecimal da BigInteger: " + bigDec);

        BigDecimal bigDec2 = new BigDecimal("12345.6789");
        BigInteger bigInt2 = bigDec2.toBigInteger();
        System.out.println("BigInteger da BigDecimal: " + bigInt2);
    }
}