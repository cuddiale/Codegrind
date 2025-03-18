// Contare il numero di cifre di un numero utilizzando il ciclo "while":

public class CicloWhile {
    public static void main(String[] args) {
        int numero = 12345;
        int conteggio = 0;
        while (numero != 0) {
            numero /= 10;
            conteggio++;
        }
        System.out.println("Il numero ha " + conteggio + " cifre.");
    }
}
