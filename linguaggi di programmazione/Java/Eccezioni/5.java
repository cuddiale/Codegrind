// Gestire eccezioni annidate in un blocco `try-catch`.

public class GestioneEccezioniAnnidate {
    public static void main(String[] args) {
        try {
            try {
                int risultato = 10 / 0;
            } catch (ArithmeticException e) {
                System.out.println("Errore interno: Divisione per zero.");
                throw e;
            }
        } catch (ArithmeticException e) {
            System.out.println("Errore esterno: " + e.getMessage());
        }
    }
}