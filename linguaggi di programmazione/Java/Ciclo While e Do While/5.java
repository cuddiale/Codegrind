// Stampare la tabellina del 5 utilizzando il ciclo "while":

public class CicloWhile {
    public static void main(String[] args) {
        int numero = 5;
        int i = 1;
        while (i <= 10) {
            int risultato = numero * i;
            System.out.println(numero + " x " + i + " = " + risultato);
            i++;
        }
    }
}