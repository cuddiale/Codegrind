// Creare una classe Quadrato che estende la classe FiguraGeometrica e implementa il metodo calcolaArea per calcolare l'area del quadrato:

public class Quadrato extends FiguraGeometrica {
    private double lato;

    public Quadrato(double lato) {
        this.lato = lato;
    }

    public double calcolaArea() {
        return lato * lato;
    }
}

public static void main(String[] args) {
    Quadrato quadrato = new Quadrato(5.0);
    double area = quadrato.calcolaArea();
    System.out.println("Area quadrato: " + area);
}