// Utilizzare `String.format` per formattare una stringa con un numero intero e una stringa.

public class FormattazioneEsempio1 {
    public static void main(String[] args) {
        int eta = 25;
        String nome = "Alice";
        String messaggio = String.format("Nome: %s, Età: %d", nome, eta);
        System.out.println(messaggio);
    }
}