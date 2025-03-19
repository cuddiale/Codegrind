// Creare una classe `ContoBancario` con attributi privati `saldo` e `numeroConto`, e fornire metodi per depositare e prelevare denaro.

public class ContoBancario {
    private double saldo;
    private String numeroConto;

    public ContoBancario(String numeroConto) {
        this.numeroConto = numeroConto;
        this.saldo = 0.0;
    }

    public String getNumeroConto() {
        return numeroConto;
    }

    public double getSaldo() {
        return saldo;
    }

    public void deposita(double importo) {
        if (importo > 0) {
            saldo += importo;
        } else {
            throw new IllegalArgumentException("L'importo del deposito deve essere positivo.");
        }
    }

    public void preleva(double importo) {
        if (importo > 0 && importo <= saldo) {
            saldo -= importo;
        } else {
            throw new IllegalArgumentException("Importo di prelievo non valido.");
        }
    }

    public static void main(String[] args) {
        ContoBancario conto = new ContoBancario("12345");
        conto.deposita(1000);
        conto.preleva(500);
        System.out.println("Numero conto: " + conto.getNumeroConto());
        System.out.println("Saldo: " + conto.getSaldo());
    }
}