// Utilizzare una costante all'interno di un metodo per eseguire un calcolo.

public class AreaCerchio {
    public static final double PI = 3.141592653589793;

    public static double calcolaArea(double raggio) {
        return PI * raggio * raggio;
    }

    public static void main(String[] args) {
        double raggio = 5.0;
        System.out.println("Area del cerchio: " + calcolaArea(raggio));
    }
}