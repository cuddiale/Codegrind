// Contare il numero di cifre di un numero intero utilizzando una funzione:

public class NumeroCifre {
    public static void main(String[] args) {
        int numero = 12345;

        int cifre = contaCifre(numero);

        System.out.println("Il numero di cifre è: " + cifre);
    }

    public static int contaCifre(int numero) {
        int count = 0;

        while (numero != 0) {
            numero /= 10;
            count++;
        }

        return count;
    }
}