// Utilizzare la classe `Scanner` per leggere un testo dall'input dell'utente e contare il numero di parole.

import java.util.Scanner;

public class ContareParole {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Inserisci un testo: ");
        String testo = scanner.nextLine();

        Scanner scannerParole = new Scanner(testo);
        int conteggio = 0;
        while (scannerParole.hasNext()) {
            scannerParole.next();
            conteggio++;
        }
        System.out.println("Il numero di parole è: " + conteggio);
        scanner.close();
        scannerParole.close();
    }
}