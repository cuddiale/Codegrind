// Utilizzare la classe `StringBuilder` per sostituire una parte di una stringa con un'altra stringa.

public class SostituzioneStringa {
    public static void main(String[] args) {
        StringBuilder sb = new StringBuilder("Ciao mondo!");
        sb.replace(5, 10, "universo");

        System.out.println(sb.toString());
    }
}