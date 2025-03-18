// Verificare se un numero è pari utilizzando un' espressione lambda:

public class NumeroPariLambda {
    public static void main(String[] args) {
        VerificatoreNumero verificatore = numero -> numero % 2 == 0;

        int numero = 6;

        boolean isPari = verificatore.verifica(numero);

        if (isPari) {
            System.out.println("Il numero è pari.");
        } else {
            System.out.println("Il numero non è pari.");
        }
    }

    interface VerificatoreNumero {
        boolean verifica(int numero);
    }
}