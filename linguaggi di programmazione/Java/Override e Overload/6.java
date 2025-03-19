// Creare una classe `Rettangolo` con costruttori sovraccaricati che accettano differenti numeri di parametri.

class Rettangolo {
    private int larghezza;
    private int altezza;

    public Rettangolo(int larghezza, int altezza) {
        this.larghezza = larghezza;
        this.altezza = altezza;
    }

    public Rettangolo(int lato) {
        this.larghezza = lato;
        this.altezza = lato;
    }

    public int area() {
        return larghezza * altezza;
    }
}

public class TestOverload {
    public static void main(String[] args) {
        Rettangolo rett1 = new Rettangolo(5, 10);
        Rettangolo rett2 = new Rettangolo(7);

        System.out.println("Area del rettangolo 1: " + rett1.area());
        System.out.println("Area del rettangolo 2: " + rett2.area());
    }
}