// Calcolare il logaritmo naturale e il logaritmo in base 10 di un numero utilizzando `Math.log` e `Math.log10`.

public class Logaritmo {
    public static void main(String[] args) {
        double numero = 100;
        double logaritmoNaturale = Math.log(numero);
        double logaritmoBase10 = Math.log10(numero);
        System.out.println("Il logaritmo naturale di " + numero + " è " + logaritmoNaturale);
        System.out.println("Il logaritmo in base 10 di " + numero + " è " + logaritmoBase10);
    }
}