// Stampare la tabellina del 5 utilizzando un ciclo "for":

public class CicloFor {
    public static void main(String[] args) {
        int numero = 5;
        for (int i = 1; i <= 10; i++) {
            int risultato = numero * i;
            System.out.println(numero + " x " + i + " = " + risultato);
        }
    }
}