// Creare una classe con costruttori sovraccaricati e istanziare oggetti della classe utilizzando diversi costruttori.

public class Rettangolo {
    private int larghezza;
    private int altezza;

    public Rettangolo() {
        this.larghezza = 1;
        this.altezza = 1;
    }

    public Rettangolo(int larghezza, int altezza) {
        this.larghezza = larghezza;
        this.altezza = altezza;
    }

    public int getArea() {
        return larghezza * altezza;
    }

    public static void main(String[] args) {
        Rettangolo r1 = new Rettangolo();
        Rettangolo r2 = new Rettangolo(5, 10);

        System.out.println("Area r1: " + r1.getArea());
        System.out.println("Area r2: " + r2.getArea());
    }
}