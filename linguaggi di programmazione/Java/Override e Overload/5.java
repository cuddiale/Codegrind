// Creare una classe `Calcolatrice` con metodi sovraccaricati `somma` che accettano differenti numeri di parametri.

class Calcolatrice {
    public int somma(int a, int b) {
        return a + b;
    }

    public int somma(int a, int b, int c) {
        return a + b + c;
    }

    public double somma(double a, double b) {
        return a + b;
    }
}

public class TestOverload {
    public static void main(String[] args) {
        Calcolatrice calc = new Calcolatrice();

        System.out.println("Somma di 2 interi: " + calc.somma(5, 10));
        System.out.println("Somma di 3 interi: " + calc.somma(5, 10, 15));
        System.out.println("Somma di 2 double: " + calc.somma(5.5, 10.5));
    }
}