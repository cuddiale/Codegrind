// Verificare se una parola è palindroma utilizzando una funzione:

public class ParolaPalindroma {
    public static void main(String[] args) {
        String parola = "radar";

        boolean isPalindroma = isParolaPalindroma(parola);

        if (isPalindroma) {
            System.out.println("La parola è palindroma.");
        } else {
            System.out.println("La parola non è palindroma.");
        }
    }

    public static boolean isParolaPalindroma(String parola) {
        String parolaInvertita = "";

        for (int i = parola.length() - 1; i >= 0; i--) {
            parolaInvertita += parola.charAt(i);
        }

        return parola.equalsIgnoreCase(parolaInvertita);
    }
}
