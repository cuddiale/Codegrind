// Creare un'interfaccia Riscontrabile con un metodo check che definisce il controllo di un oggetto:

public interface Riscontrabile {
    void check();
}

public class Ordine implements Riscontrabile {
    public void check() {
        System.out.println("L'ordine è stato verificato.");
    }

    public static void main(String[] args) {
        Ordine ordine = new Ordine();
        ordine.check();
    }
}