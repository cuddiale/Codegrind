// Stampare i numeri pari da 10 a 1 utilizzando il ciclo "do-while":

public class CicloDoWhile {
    public static void main(String[] args) {
        int numero = 10;
        do {
            System.out.println(numero);
            numero -= 2;
        } while (numero >= 1);
    }
}
