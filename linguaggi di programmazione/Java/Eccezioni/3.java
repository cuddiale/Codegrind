// Utilizzare il blocco `finally` per eseguire codice che deve essere eseguito indipendentemente dalle eccezioni.

public class UsoFinally {
    public static void main(String[] args) {
        try {
            int risultato = 10 / 0;
        } catch (ArithmeticException e) {
            System.out.println("Errore: Divisione per zero.");
        } finally {
            System.out.println("Blocco finally eseguito.");
        }
    }
}