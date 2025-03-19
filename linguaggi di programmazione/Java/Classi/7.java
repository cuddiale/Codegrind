// Creare una classe Contatore con un campo valore e metodi per incrementare e decrementare il valore:

public class Contatore {
    private int valore;

    public Contatore() {
        valore = 0;
    }

    public void incrementa() {
        valore++;
    }

    public void decrementa() {
        valore--;
    }

    public int getValore() {
        return valore;
    }
}

public static void main(String[] args) {
    Contatore contatore = new Contatore();

    contatore.incrementa();
    contatore.incrementa();
    contatore.decrementa();

    int valore = contatore.getValore();

    System.out.println("Valore: " + valore);
}