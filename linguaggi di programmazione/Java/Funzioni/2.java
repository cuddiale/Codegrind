// Verificare se un numero è pari utilizzando una funzione:

public class NumeroPari {
    public static void main(String[] args) {
        int numero = 6;

        boolean isPari = isNumeroPari(numero);

        if (isPari) {
            System.out.println("Il numero è pari.");
        } else {
            System.out.println("Il numero è dispari.");
        }
    }

    public static boolean isNumeroPari(int numero) {
        return numero % 2 == 0;
    }
}
