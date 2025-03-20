// Utilizzare la classe `StringBuilder` per concatenare una serie di stringhe e stampare il risultato.

public class ConcatenazioneStringhe {
    public static void main(String[] args) {
        StringBuilder sb = new StringBuilder();
        sb.append("Ciao");
        sb.append(", ");
        sb.append("mondo");
        sb.append("!");

        System.out.println(sb.toString());
    }
}