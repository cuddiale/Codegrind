// Calcolare la somma degli elementi di un array di double utilizzando il ciclo "foreach":

public class CicloForEach {
    public static void main(String[] args) {
        double[] numeri = {1.5, 2.3, 4.7, 3.2};
        double somma = 0;
        for (double numero : numeri) {
            somma += numero;
        }
        System.out.println("La somma degli elementi dell'array è: " + somma);
    }
}
