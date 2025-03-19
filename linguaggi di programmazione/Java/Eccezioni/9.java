// Utilizzare le eccezioni per validare l'input dell'utente.

import java.util.Scanner;

public class ValidazioneInput {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Inserisci un numero positivo: ");
        int numero = scanner.nextInt();

        try {
            validaNumero(numero);
            System.out.println("Numero valido: " + numero);
        } catch (IllegalArgumentException e) {
            System.out.println("Errore: " + e.getMessage());
        }
    }

    public static void validaNumero(int numero) {
        if (numero <= 0) {
            throw new IllegalArgumentException("Il numero deve essere positivo.");
        }
    }
}