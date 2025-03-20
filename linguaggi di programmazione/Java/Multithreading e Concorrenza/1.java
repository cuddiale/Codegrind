// Creare e avviare un thread estendendo la classe `Thread`.

public class ThreadEsteso extends Thread {
    public void run() {
        System.out.println("Esecuzione del thread: " + Thread.currentThread().getName());
    }

    public static void main(String[] args) {
        ThreadEsteso thread = new ThreadEsteso();
        thread.start();
    }
}