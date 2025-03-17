// Stampare una sequenza di numeri in base all'input dell'utente utilizzando un ciclo "for":

import java.util.Scanner;

public class CicloFor {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Inserisci un numero: ");
        int numero = scanner.nextInt();
        System.out.println("Sequenza di numeri da 1 a " + numero + ":");
        for (int i = 1; i <= numero; i++) {
            System.out.println(i);
        }
    }
}