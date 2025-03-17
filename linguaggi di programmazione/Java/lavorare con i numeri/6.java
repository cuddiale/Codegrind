// Scrivi un programma Java che calcola la potenza di un numero intero e stampa il risultato.

public class CalcoliNumerici {
    public static void main(String[] args) {
        int base = 2;
        int esponente = 5;
        int potenza = (int) Math.pow(base, esponente);
        System.out.println("La potenza è: " + potenza);
    }
}
