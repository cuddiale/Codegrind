// Utilizzare la classe `Scanner` per leggere un numero intero dall'input dell'utente e stamparlo.

import java.util.Scanner;

public class LetturaIntero {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Inserisci un numero intero: ");
        int numero = scanner.nextInt();
        System.out.println("Hai inserito: " + numero);
        scanner.close();
    }
}