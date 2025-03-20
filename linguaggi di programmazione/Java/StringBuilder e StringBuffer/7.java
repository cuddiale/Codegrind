// Utilizzare la classe `StringBuilder` per mostrare la capacità e la lunghezza di una stringa.

public class CapacitaLunghezza {
    public static void main(String[] args) {
        StringBuilder sb = new StringBuilder("Ciao mondo!");
        System.out.println("Capacità: " + sb.capacity());
        System.out.println("Lunghezza: " + sb.length());

        sb.append(" Questa è una stringa più lunga.");
        System.out.println("Nuova capacità: " + sb.capacity());
        System.out.println("Nuova lunghezza: " + sb.length());
    }
}