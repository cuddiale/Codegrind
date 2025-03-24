public class Conto {
    private int numeroConto;
    private String proprietario;
    private double saldo;

    public Conto(int numeroConto, String proprietario) {
        this.numeroConto = numeroConto;
        this.proprietario = proprietario;
        this.saldo = 0.0;
    }

    public void deposita(double importo) {
        if (importo > 0) {
            saldo += importo;
        }
    }

    public boolean preleva(double importo) {
        if (importo > 0 && saldo >= importo) {
            saldo -= importo;
            return true;
        }
        return false;
    }

    public double getSaldo() {
        return saldo;
    }
}