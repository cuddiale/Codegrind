// Creare una classe immutabile con un costruttore che inizializza tutti gli attributi.

public final class PuntoImmutabile {
    private final int x;
    private final int y;

    public PuntoImmutabile(int

 x, int y) {
        this.x = x;
        this.y = y;
    }

    public int getX() {
        return x;
    }

    public int getY() {
        return y;
    }

    public static void main(String[] args) {
        PuntoImmutabile punto = new PuntoImmutabile(3, 4);
        System.out.println("Punto: (" + punto.getX() + ", " + punto.getY() + ")");
    }
}