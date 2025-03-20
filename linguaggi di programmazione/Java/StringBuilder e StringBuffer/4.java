// Utilizzare la classe `StringBuilder` per invertire una stringa.

public class InversioneStringa {
    public static void main(String[] args) {
        StringBuilder sb = new StringBuilder("Ciao mondo!");
        sb.reverse();

        System.out.println(sb.toString());
    }
}