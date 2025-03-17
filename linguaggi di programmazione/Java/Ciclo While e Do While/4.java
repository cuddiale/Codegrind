// Calcolare il prodotto dei numeri dispari da 1 a 15 utilizzando il ciclo "while":

public class CicloWhile {
    public static void main(String[] args) {
        int numero = 1;
        int prodotto = 1;
        while (numero <= 15) {
            prodotto *= numero;
            numero += 2;
        }
        System.out.println("Il prodotto dei numeri dispari da 1 a 15 è: " + prodotto);
    }
}