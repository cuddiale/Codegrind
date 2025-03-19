// Creare un'interfaccia Registrabile con un metodo register che definisce la registrazione di un oggetto:

public interface Registrabile {
    void register();
}

public class Utente implements Registrabile {
    public void register() {
        System.out.println("Utente registrato.");
    }

    public static void main(String[] args) {
        Utente utente = new Utente();
        utente.register();
    }
}