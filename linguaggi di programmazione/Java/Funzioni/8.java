// Calcolare la potenza di un numero utilizzando una funzione:

public class Potenza {
    public static void main(String[] args) {
        int base = 2;
        int esponente = 5;

        int potenza = calcolaPotenza(base, esponente);

        System.out.println(base + " elevato a " + esponente + " è: " + potenza);
    }

    public static int calcolaPotenza(int base, int esponente) {
        int risultato = 1;

        for (int i = 0; i < esponente; i++) {
            risultato *= base;
        }

        return risultato;
    }
}