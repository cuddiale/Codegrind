// Utilizzare la classe `Scanner` per leggere un numero double dall'input dell'utente e stamparlo.

import java.util.Scanner;

public class LetturaDouble {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Inserisci un numero double: ");
        double numero = scanner.nextDouble();
        System.out.println("Hai inserito: " + numero);
        scanner.close();
    }
}