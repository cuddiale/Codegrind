// Scrivi un programma Java che trova il valore minimo tra tre numeri decimali e stampa il risultato.

public class CalcoliNumerici {
    public static void main(String[] args) {
        double numero1 = 5.7;
        double numero2 = 3.2;
        double numero3 = 7.1;
        double minimo = Math.min(Math.min(numero1, numero2), numero3);
        System.out.println("Il valore minimo è: " + minimo);
    }
}