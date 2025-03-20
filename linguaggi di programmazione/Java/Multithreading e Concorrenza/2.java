// Creare e avviare un thread implementando l'interfaccia `Runnable`.

public class ThreadRunnable implements Runnable {
    public void run() {
        System.out.println("Esecuzione del thread: " + Thread.currentThread().getName());
    }

    public static void main(String[] args) {
        Thread thread = new Thread(new ThreadRunnable());
        thread.start();
    }
}