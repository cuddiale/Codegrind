// Utilizzare la classe `StringBuffer` per concatenare una serie di stringhe e stampare il risultato.

public class ConcatenazioneStringheBuffer {
    public static void main(String[] args) {
        StringBuffer sb = new StringBuffer();
        sb.append("Ciao");
        sb.append(", ");
        sb.append("mondo");
        sb.append("!");

        System.out.println(sb.toString());
    }
}