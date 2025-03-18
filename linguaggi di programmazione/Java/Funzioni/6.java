// Calcolare il massimo tra tre numeri utilizzando una funzione:

public class MassimoTraTreNumeri {
    public static void main(String[] args) {
        int numero1 = 10;
        int numero2 = 7;
        int numero3 = 12;

        int massimo = calcolaMassimo(numero1, numero2, numero3);

        System.out.println("Il massimo è: " + massimo);
    }

    public static int calcolaMassimo(int numero1, int numero2, int numero3) {
        int max = numero1;

        if (numero2 > max) {
            max = numero2;
        }

        if (numero3 > max) {
            max = numero3;
        }

        return max;
    }
}
