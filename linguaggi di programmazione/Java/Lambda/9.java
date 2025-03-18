// Calcolare la potenza di un numero utilizzando un' espressione lambda:

public class PotenzaLambda {
    public static void main(String[] args) {
        CalcolatorePotenza calcolatore = (base, esponente) -> {
            int risultato = 1;
            for (int i = 0; i < esponente; i++) {
                risultato *= base;
            }
            return risultato;
        };

        int base = 2;
        int esponente = 5;

        int potenza = calcolatore.calcola(base, esponente);

        System.out.println(base + " elevato a " + esponente + " è: " + potenza);
    }

    interface CalcolatorePotenza {
        int calcola(int base, int esponente);
    }
}