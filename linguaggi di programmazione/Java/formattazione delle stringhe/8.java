// Formattare un numero intero con il segno utilizzando `String.format`.

public class FormattazioneEsempio8 {
    public static void main(String[] args) {
        int positivo = 123;
        int negativo = -123;
        String formatoPositivo = String.format("%+d", positivo);
        String formatoNegativo = String.format("%+d", negativo);
        System.out.println("Numero positivo: " + formatoPositivo);
        System.out.println("Numero negativo: " + formatoNegativo);
    }
}