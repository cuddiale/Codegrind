// Creare una classe Cerchio che estende la classe Figura e implementa il metodo calcolaArea per calcolare l'area del cerchio:

public class Cerchio extends Figura {
    private double raggio;

    public Cerchio(double raggio) {
        this.raggio = raggio;
    }

    public double calcolaArea() {
        return Math.PI * raggio * raggio;
    }
}

public static void main(String[] args) {
    Cerchio cerchio = new Cerchio(3.0);
    double area = cerchio.calcolaArea();
    System.out.println("Area cerchio: " + area);
}