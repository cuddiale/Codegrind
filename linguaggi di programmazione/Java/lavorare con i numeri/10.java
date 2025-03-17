// Scrivi un programma Java che genera un numero casuale compreso tra 1 e 100 e stampa il risultato.

public class CalcoliNumerici {
    public static void main(String[] args) {
        int numeroCasuale = (int) (Math.random() * 100) + 1;
        System.out.println("Il numero casuale generato è: " + numeroCasuale);
    }
}
