// Calcolare la media dei voti in un array di interi utilizzando il ciclo "foreach":

public class CicloForEach {
    public static void main(String[] args) {
        int[] voti = {80, 90, 75, 85};
        int somma = 0;
        for (int voto : voti) {
            somma += voto;
        }
        double media = (double) somma / voti.length;
        System.out.println("La media dei voti è: " + media);
    }
}