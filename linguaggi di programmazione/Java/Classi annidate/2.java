// Creare una classe annidata statica e accedere ai membri statici della classe esterna.

public class EsternaStatica {
    private static String messaggio = "Ciao dal mondo esterno statico!";

    static class InternaStatica {
        public void stampaMessaggio() {
            System.out.println(messaggio);
        }
    }

    public static void main(String[] args) {
        EsternaStatica.InternaStatica interna = new EsternaStatica.InternaStatica();
        interna.stampaMessaggio();
    }
}