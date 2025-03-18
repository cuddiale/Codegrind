// Calcolare il fattoriale di un numero utilizzando una funzione ricorsiva:

public class Fattoriale {
    public static void main(String[] args) {
        int numero = 5;

        int fattoriale = calcolaFattoriale(numero);

        System.out.println("Il fattoriale di " + numero + " è: " + fattoriale);
    }

    public static int calcolaFattoriale(int numero) {
        if (numero == 0) {
            return 1;
        } else {
            return numero * calcolaFattoriale(numero - 1);
        }
    }
}
