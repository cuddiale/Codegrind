// Calcolare la potenza di un numero utilizzando `BigDecimal`.

import java.math.BigDecimal;
import java.math.MathContext;

public class PotenzaBigDecimal {
    public static void main(String[] args) {
        BigDecimal base = new BigDecimal("2.5");
        int esponente = 3;
        BigDecimal potenza = base.pow(esponente, MathContext.DECIMAL64);

        System.out.println(base + " elevato alla potenza di " + esponente + " è: " + potenza);
    }
}