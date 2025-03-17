// Calcolare il fattoriale di un numero utilizzando un ciclo "for":

public class CicloFor {
    public static void main(String[] args) {
        int numero = 5;
        int fattoriale = 1;
        for (int i = 1; i <= numero; i++) {
            fattoriale *= i;
        }
        System.out.println("Il fattoriale di " + numero + " è: " + fattoriale);
    }
}