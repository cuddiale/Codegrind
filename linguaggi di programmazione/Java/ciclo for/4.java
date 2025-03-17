// Calcolare il prodotto dei numeri dispari da 1 a 15 utilizzando un ciclo "for":

public class CicloFor {
    public static void main(String[] args) {
        int prodotto = 1;
        for (int i = 1; i <= 15; i += 2) {
            prodotto *= i;
        }
        System.out.println("Il prodotto dei numeri dispari da 1 a 15 è: " + prodotto);
    }
}