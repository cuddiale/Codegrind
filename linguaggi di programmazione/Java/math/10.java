// Calcolare l'ipotenusa di un triangolo rettangolo utilizzando `Math.hypot`.

public class Ipotenusa {
    public static void main(String[] args) {
        double a = 3;
        double b = 4;
        double ipotenusa = Math.hypot(a, b);
        System.out.println("L'ipotenusa di un triangolo rettangolo con lati " + a + " e " + b + " è " + ipotenusa);
    }
}