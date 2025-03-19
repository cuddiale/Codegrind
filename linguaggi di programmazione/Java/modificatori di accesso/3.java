// Creare una classe ContoBancario con un campo saldo privato e un metodo deposita pubblico per accedere al campo e depositare denaro:

public class ContoBancario {
    private double saldo;

    public void deposita(double importo) {
        saldo += importo;
        System.out.println("Saldo aggiornato: " + saldo);
    }
}

public static void main(String[] args) {
    ContoBancario conto = new ContoBancario();
    conto.deposita(100.0);
}