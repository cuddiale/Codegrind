// Definire costanti statiche finali in una classe e utilizzarle in un metodo statico.

public class CostantiClasse {
    public static final int MAX_UTENTI = 100;
    public static final String VERSIONE = "1.0.0";

    public static void stampaInfo() {
        System.out.println("Max utenti: " + MAX_UTENTI);
        System.out.println("Versione: " + VERSIONE);
    }

    public static void main(String[] args) {
        stampaInfo();
    }
}