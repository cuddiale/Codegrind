// Utilizzare la classe `Scanner` per leggere una stringa dall'input dell'utente e stamparla.

import java.util.Scanner;

public class LetturaStringa {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Inserisci una stringa: ");
        String input = scanner.nextLine();
        System.out.println("Hai inserito: " + input);
        scanner.close();
    }
}