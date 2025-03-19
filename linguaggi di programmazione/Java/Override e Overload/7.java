// Creare una classe `Stampante` con metodi sovraccaricati `stampa` che accettano differenti tipi di parametri.

class Stampante {
    public void stampa(String testo) {
        System.out.println("Stringa: " + testo);
    }

    public void stampa(int numero) {
        System.out.println("Intero: " + numero);
    }

    public void stampa(double numero) {
        System.out.println("Double: " + numero);
    }
}

public class TestOverload {
    public static void main(String[] args) {
        Stampante stampante = new Stampante();

        stampante.stampa("Ciao, mondo!");
        stampante.stampa(100);
        stampante.stampa(99.99);
    }
}