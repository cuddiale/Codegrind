// Creare una classe interna semplice che accede ai membri della classe esterna.

public class Esterna {
    private String messaggio = "Ciao dal mondo esterno!";

    class Interna {
        public void stampaMessaggio() {
            System.out.println(messaggio);
        }
    }

    public static void main(String[] args) {
        Esterna esterna = new Esterna();
        Esterna.Interna interna = esterna.new Interna();
        interna.stampaMessaggio();
    }
}