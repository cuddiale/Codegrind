// Creare un'interfaccia Cliccabile con un metodo click che definisce l'azione di clic su un oggetto:

public interface Cliccabile {
    void click();
}

public class Pulsante implements Cliccabile {
    public void click() {
        System.out.println("Hai cliccato sul pulsante.");
    }

    public static void main(String[] args) {
        Pulsante pulsante = new Pulsante();
        pulsante.click();
    }
}