// Creare una classe Banca con un campo saldo e metodi per depositare e prelevare denaro:

public class Banca {
    private double saldo;

    public Banca() {
        saldo = 0;
    }

    public void deposita(double importo) {
        saldo += importo;
    }

    public void preleva(double importo) {
        if (saldo >= importo) {
            saldo -= importo;
        } else {
            System.out.println("Saldo insufficiente.");
        }
    }

    public double getSaldo() {
        return saldo;
    }
}

public static void main(String[] args) {
    Banca banca = new Banca();

    banca.deposita(1000.0);
    banca.preleva(500.0);

    double saldo = banca.getSaldo();

    System.out.println("Saldo: " + saldo);
}
