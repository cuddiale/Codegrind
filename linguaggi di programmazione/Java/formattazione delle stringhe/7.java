// Formattare un numero intero come esadecimale utilizzando `String.format`.

public class FormattazioneEsempio7 {
    public static void main(String[] args) {
        int numero = 255;
        String formato = String.format("Esadecimale: %x", numero);
        System.out.println(formato);
    }
}