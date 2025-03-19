// Creare una classe Cerchio con un campo raggio e metodi per calcolare l'area e la circonferenza:

public class Cerchio {
    private double raggio;

    public Cerchio(double raggio) {
        this.raggio = raggio;
    }

    public double calcolaArea() {
        return Math.PI * Math.pow(raggio, 2);
    }

    public double calcolaCirconferenza() {
        return 2 * Math.PI * raggio;
    }
}

public static void main(String[] args) {
    Cerchio cerchio = new Cerchio(5.0);

    double area = cerchio.calcolaArea();
    double circonferenza = cerchio.calcolaCirconferenza();

    System.out.println("Area: " + area);
    System.out.println("Circonferenza: " + circonferenza);
}
