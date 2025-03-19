// Creare un'interfaccia Drawable con un metodo draw che definisce il disegno di un oggetto:

public interface Drawable {
    void draw();
}

public class Cerchio implements Drawable {
    public void draw() {
        System.out.println("Disegna un cerchio.");
    }

    public static void main(String[] args) {
        Cerchio cerchio = new Cerchio();
        cerchio.draw();
    }
}