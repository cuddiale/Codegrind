// Utilizzare costanti in un costruttore per inizializzare variabili di istanza.

public class Configurazione {
    public static final String DEFAULT_HOST = "localhost";
    public static final int DEFAULT_PORT = 8080;

    private String host;
    private int port;

    public Configurazione() {
        this.host = DEFAULT_HOST;
        this.port = DEFAULT_PORT;
    }

    public void stampaConfigurazione() {
        System.out.println("Host: " + host);
        System.out.println("Porta: " + port);
    }

    public static void main(String[] args) {
        Configurazione config = new Configurazione();
        config.stampaConfigurazione();
    }
}