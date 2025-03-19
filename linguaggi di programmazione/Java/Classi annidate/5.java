// Accedere a variabili locali finali da una classe interna locale.

public class VariabiliFinali {
    public void metodoConClasseLocale() {
        final String messaggio = "Variabile finale";

        class Locale {
            public void stampaMessaggio() {
                System.out.println(messaggio);
            }
        }

        Locale locale = new Locale();
        locale.stampaMessaggio();
    }

    public static void main(String[] args) {
        VariabiliFinali vf = new VariabiliFinali();
        vf.metodoConClasseLocale();
    }
}