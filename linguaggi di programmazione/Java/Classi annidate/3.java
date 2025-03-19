// Creare una classe locale all'interno di un metodo e accedere ai membri locali del metodo.

public class ClasseLocale {
    public void metodoConClasseLocale() {
        String messaggio = "Ciao dalla classe locale!";

        class Locale {
            public void stampaMessaggio() {
                System.out.println(messaggio);
            }
        }

        Locale locale = new Locale();
        locale.stampaMessaggio();
    }

    public static void main(String[] args) {
        ClasseLocale cl = new ClasseLocale();
        cl.metodoConClasseLocale();
    }
}