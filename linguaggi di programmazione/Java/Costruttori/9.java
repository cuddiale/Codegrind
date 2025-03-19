// Creare una classe con un costruttore che lancia un'eccezione se viene passato un valore non valido.

public class ContoBancario {
    private double saldo;

    public ContoBancario(double saldoIniziale) throws IllegalArgumentException {
        if (saldoIniziale < 0) {
            throw new IllegalArgumentException("Il saldo iniziale non può essere negativo.");
        }
        this.saldo = saldoIniziale;
    }

    public double getSaldo() {
        return saldo;
    }

    public static void main(String[] args) {
        try {
            ContoBancario conto = new ContoBancario(-100);
        } catch (IllegalArgumentException e) {
            System.out.println(e.getMessage());
        }
    }
}