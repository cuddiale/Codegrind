// Creare una classe con un costruttore privato e utilizzare un metodo statico per istanziare oggetti della classe.

public class Singleton {
    private static Singleton istanza;

    private Singleton() {
        // Costruttore privato
    }

    public static Singleton getIstanza() {
        if (istanza == null) {
            istanza = new Singleton();
        }
        return istanza;
    }

    public void stampaMessaggio() {
        System.out.println("Ciao dal Singleton!");
    }

    public static void main(String[] args) {
        Singleton s = Singleton.getIstanza();
        s.stampaMessaggio();
    }
}