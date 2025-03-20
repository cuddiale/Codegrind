// Calcolare il massimo e il minimo di due numeri utilizzando `Math.max` e `Math.min`.

public class MassimoMinimo {
    public static void main(String[] args) {
        int a = 10;
        int b = 20;
        int massimo = Math.max(a, b);
        int minimo = Math.min(a, b);
        System.out.println("Il massimo tra " + a + " e " + b + " è " + massimo);
        System.out.println("Il minimo tra " + a + " e " + b + " è " + minimo);
    }
}