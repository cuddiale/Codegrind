// Creare una classe astratta Forma con un metodo astratto calcolaArea che restituisce l'area della forma:

public abstract class Forma {
    public abstract double calcolaArea();

    public static void main(String[] args) {
        Forma forma = new Forma() {
            public double calcolaArea() {
                return 0;
            }
        };

        double area = forma.calcolaArea();
        System.out.println("Area forma: " + area);
    }
}