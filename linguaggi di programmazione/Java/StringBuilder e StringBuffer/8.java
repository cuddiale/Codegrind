// Utilizzare un `StringBuffer` per costruire una stringa, quindi convertirlo in un `StringBuilder` per ulteriori manipolazioni.

public class ConversioneStringBuffer {
    public static void main(String[] args) {
        StringBuffer sbuffer = new StringBuffer("Iniziale");
        sbuffer.append(" StringBuffer");

        // Conversione a StringBuilder
        StringBuilder sbuilder = new StringBuilder(sbuffer.toString());
        sbuilder.append(" e StringBuilder");

        System.out.println(sbuilder.toString());
    }
}