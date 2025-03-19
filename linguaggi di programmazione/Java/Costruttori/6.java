// Creare una classe in cui un costruttore chiama un altro costruttore della stessa classe.

public class Cerchio {
    private double raggio;

    public Cerchio() {
        this(1.0);  // Chiamata al costruttore con parametri
    }

    public Cerchio(double raggio) {
        this.raggio = raggio;
    }

    public double getArea() {
        return Math.PI * raggio * raggio;
    }

    public static void main(String[] args) {
        Cerchio c1 = new Cerchio();
        Cerchio c2 = new Cerchio(5.0);

        System.out.println("Area c1: " + c1.getArea());
        System.out.println("Area c2: " + c2.getArea());
    }
}