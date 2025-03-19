// Dimostrare la differenza tra eccezioni verificate e non verificate.

public class VerificateNonVerificate {
    public static void main(String[] args) {
        // Eccezione non verificata (unchecked)
        try {
            int risultato = 10 / 0;
        } catch (ArithmeticException e) {
            System.out.println("Errore: " + e.getMessage());
        }

        // Eccezione verificata (checked)
        try {
            throw new Exception("Eccezione verificata.");
        } catch (Exception e) {
            System.out.println("Errore: " + e.getMessage());
        }
    }
}