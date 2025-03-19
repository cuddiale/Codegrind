// Creare una classe Triangolo che estende la classe Figura e implementa il metodo calcolaArea per calcolare l'area del triangolo:

public class Triangolo extends Figura {
    private double base;
    private double altezza;

    public Triangolo(double base, double altezza) {
        this.base = base;
        this.altezza = altezza;
    }

    public double calcolaArea() {
        return (base * altezza) / 2;
    }
}

public static void main(String[] args) {
    Triangolo triangolo = new Triangolo(4.0, 6.0);
    double area = triangolo.calcolaArea();
    System.out.println("Area triangolo: " + area);
}