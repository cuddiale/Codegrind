// Calcolare la radice quadrata di un numero utilizzando `BigDecimal`.

import java.math.BigDecimal;
import java.math.MathContext;

public class RadiceBigDecimal {
    public static void main(String[] args) {
        BigDecimal numero = new BigDecimal("25.0");
        BigDecimal radice = sqrt(numero, MathContext.DECIMAL64);

        System.out.println("Radice quadrata di " + numero + " è: " + radice);
    }

    public static BigDecimal sqrt(BigDecimal value, MathContext mc) {
        BigDecimal x0 = new BigDecimal(0);
        BigDecimal x1 = new BigDecimal(Math.sqrt(value.doubleValue()));
        while (!x0.equals(x1)) {
            x0 = x1;
            x1 = value.divide(x0, mc).add(x0).divide(BigDecimal.valueOf(2), mc);
        }
        return x1;
    }
}