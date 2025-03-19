// Utilizzare un blocco di inizializzazione statico per eseguire un'azione all'avvio della classe.

public class Database {
    private static String url;

    static {
        url = "jdbc:mysql://localhost:3306/miodatabase";
        System.out.println("Blocco statico eseguito. URL: " + url);
    }

    public static void main(String[] args) {
        // Blocco statico già eseguito
    }
}