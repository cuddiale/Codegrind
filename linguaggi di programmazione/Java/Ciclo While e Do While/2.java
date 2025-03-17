// Calcolare la somma dei numeri da 1 a 100 utilizzando il ciclo "while":

public class CicloWhile {
    public static void main(String[] args) {
        int numero = 1;
        int somma = 0;
        while (numero <= 100) {
            somma += numero;
            numero++;
        }
        System.out.println("La somma dei numeri da 1 a 100 è: " + somma);
    }
}
