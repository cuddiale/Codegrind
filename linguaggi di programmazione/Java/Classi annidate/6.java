// Creare una classe interna privata e un metodo nella classe esterna per accedere ai suoi membri.

public class EsternaPrivata {
    private String messaggio = "Classe interna privata";

    private class InternaPrivata {
        public void stampaMessaggio() {
            System.out.println(messaggio);
        }
    }

    public void metodoAccediInterna() {
        InternaPrivata interna = new InternaPrivata();
        interna.stampaMessaggio();
    }

    public static void main(String[] args) {
        EsternaPrivata ep = new EsternaPrivata();
        ep.metodoAccediInterna();
    }
}