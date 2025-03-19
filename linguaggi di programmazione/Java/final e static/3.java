// Utilizzare un blocco statico per eseguire del codice all'avvio della classe.

public class BloccoStatico {
    static {
        System.out.println("Blocco statico eseguito.");
    }

    public static void main(String[] args) {
        System.out.println("Metodo main eseguito.");
    }
}