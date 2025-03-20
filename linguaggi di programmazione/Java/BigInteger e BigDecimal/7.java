// Calcolare il fattoriale di un numero grande utilizzando `BigInteger`.

import java.math.BigInteger;

public class FattorialeBigInteger {
    public static void main(String[] args) {
        int n = 50; // Numero di cui calcolare il fattoriale
        BigInteger fattoriale = BigInteger.ONE;

        for (int i = 2; i <= n; i++) {
            fattoriale = fattoriale.multiply(BigInteger.valueOf(i));
        }

        System.out.println("Fattoriale di " + n + " è: " + fattoriale);
    }
}