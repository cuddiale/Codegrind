// Utilizzare la classe `StringBuilder` per inserire una stringa in una posizione specifica.

public class InserimentoStringa {
    public static void main(String[] args) {
        StringBuilder sb = new StringBuilder("Ciao mondo!");
        sb.insert(5, "bello ");

        System.out.println(sb.toString());
    }
}