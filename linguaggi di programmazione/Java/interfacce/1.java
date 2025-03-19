// Creare un'interfaccia Movable con un metodo move che definisce il movimento di un oggetto:

public interface Movable {
    void move();
}

public class Auto implements Movable {
    public void move() {
        System.out.println("L'auto si sta muovendo.");
    }

    public static void main(String[] args) {
        Auto auto = new Auto();
        auto.move();
    }
}