// Creare un'interfaccia Spostabile con un metodo sposta che definisce lo spostamento di un oggetto:

public interface Spostabile {
    void sposta();
}

public class Oggetto implements Spostabile {
    public void sposta() {
        System.out.println("L'oggetto è stato spostato.");
    }

    public static void main(String[] args) {
        Oggetto oggetto = new Oggetto();
        oggetto.sposta();
    }
}
