// Verificare se una parola è palindroma utilizzando un' espressione lambda:

public class ParolaPalindromaLambda {
    public static void main(String[] args) {
        VerificatoreParola verificatore = parola -> {
            String parolaInvertita = "";

            for (int i = parola.length() - 1; i >= 0; i--) {
                parolaInvertita += parola.charAt(i);
            }

            return parola.equalsIgnoreCase(parolaInvertita);
        };

        String parola = "radar";

        boolean isPalindroma = verificatore.verifica(parola);

        if (isPalindroma) {
            System.out.println("La parola è palindroma.");
        } else {
            System.out.println("La parola non è palindroma.");
        }
    }

    interface VerificatoreParola {
        boolean verifica(String parola);
    }
}