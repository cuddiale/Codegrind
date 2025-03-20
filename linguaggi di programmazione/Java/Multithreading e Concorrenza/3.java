// Utilizzare la parola chiave `synchronized` per sincronizzare un metodo in una classe che implementa `Runnable`.

public class Sincronizzazione implements Runnable {
    private int contatore = 0;

    public synchronized void incrementa() {
        contatore++;
        System.out.println("Contatore: " + contatore);
    }

    public void run() {
        for (int i = 0; i < 5; i++) {
            incrementa();
        }
    }

    public static void main(String[] args) {
        Sincronizzazione obj = new Sincronizzazione();
        Thread t1 = new Thread(obj);
        Thread t2 = new Thread(obj);
        t1.start();
        t2.start();
    }
}