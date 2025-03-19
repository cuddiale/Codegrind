// Utilizzare la classe `Scanner` per leggere tre numeri interi dall'input dell'utente e calcolare la loro somma.

import java.util.Scanner;

public class LetturaMultipla {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Inserisci il primo numero: ");
        int num1 = scanner.nextInt();
        System.out.print("Inserisci il secondo numero: ");
        int num2 = scanner.nextInt();
        System.out.print("Inserisci il terzo numero: ");
        int num3 = scanner.nextInt();
        int somma = num1 + num2 + num3;
        System.out.println("La somma è: " + somma);
        scanner.close();
    }
}