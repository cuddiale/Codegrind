// Formattare un numero con separatore di migliaia utilizzando `String.format`.

public class FormattazioneEsempio5 {
    public static void main(String[] args) {
        int numero = 1234567;
        String formato = String.format("%,d", numero);
        System.out.println("Numero formattato: " + formato);
    }
}