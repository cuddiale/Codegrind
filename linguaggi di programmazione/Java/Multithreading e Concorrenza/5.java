// Utilizzare `CountDownLatch` per sincronizzare l'esecuzione di più thread.

import java.util.concurrent.CountDownLatch;

public class CountDownLatchEsempio {
    public static void main(String[] args) {
        CountDownLatch latch = new CountDownLatch(3);

        Runnable task = () -> {
            try {
                Thread.sleep(1000);
                System.out.println(Thread.currentThread().getName() + " completato");
                latch.countDown();
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        };

        for (int i = 0; i < 3; i++) {
            new Thread(task).start();
        }

        try {
            latch.await();
            System.out.println("Tutti i thread sono completati");
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }
}