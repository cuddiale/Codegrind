// Utilizzare la classe `StringBuffer` per invertire una stringa.

public class InversioneStringaBuffer {
    public static void main(String[] args) {
        StringBuffer sb = new StringBuffer("Ciao mondo!");
        sb.reverse();

        System.out.println(sb.toString());
    }
}