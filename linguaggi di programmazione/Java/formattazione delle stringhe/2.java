// Formattare un numero decimale con due cifre decimali utilizzando `String.format`.

public class FormattazioneEsempio2 {
    public static void main(String[] args) {
        double numero = 123.456789;
        String formato = String.format("%.2f", numero);
        System.out.println("Numero formattato: " + formato);
    }
}