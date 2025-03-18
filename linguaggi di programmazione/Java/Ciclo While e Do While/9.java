// Calcolare la somma dei numeri da 1 a 50 utilizzando il ciclo "do-while":

public class CicloDoWhile {
    public static void main(String[] args) {
        int numero = 1;
        int somma = 0;
        do {
            somma += numero;
            numero++;
        } while (numero <= 50);
        System.out.println("La somma dei numeri da 1 a 50 è: " + somma);
    }
}