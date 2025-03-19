// Creare una classe annidata con un costruttore che accetta parametri e creare un'istanza dalla classe esterna.

public class EsternaConCostruttore {
    class Interna {
        private String messaggio;

        public Interna(String messaggio) {
            this.messaggio = messaggio;
        }

        public void stampaMessaggio() {
            System.out.println(messaggio);
        }
    }

    public static void main(String[] args) {
        EsternaConCostruttore esterna = new EsternaConCostruttore();
        EsternaConCostruttore.Interna interna = esterna.new Interna("Ciao dalla classe interna con costruttore!");
        interna.stampaMessaggio();
    }
}