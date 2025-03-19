// Creare una classe con un costruttore copia e istanziare un oggetto della classe utilizzando il costruttore copia.

public class Punto {
    private int x;
    private int y;

    public Punto(int x, int y) {
        this.x = x;
        this.y = y;
    }

    public Punto(Punto punto) {
        this.x = punto.x;
        this.y = punto.y;
    }

    public String toString() {
        return "Punto(" + x + ", " + y + ")";
    }

    public static void main(String[] args) {
        Punto p1 = new Punto(3, 4);
        Punto p2 = new Punto(p1);

        System.out.println("p1: " + p1);
        System.out.println("p2: " + p2);
    }
}