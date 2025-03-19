// Creare una classe Triangolo con un campo base privato e un metodo calcolaArea pubblico per calcolare l'area del triangolo:

public class Triangolo {
    private double base;

    public Triangolo(double base) {
        this.base = base;
    }

    public double calcolaArea() {
        return (base * base) / 2;
    }
}

public static void main(String[] args) {
    Triangolo triangolo = new Triangolo(5.0);
    double area = triangolo.calcolaArea();
    System.out.println("Area: " + area);
}