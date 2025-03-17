// Stampare gli elementi di una matrice utilizzando il ciclo "foreach":

public class CicloForEach {
    public static void main(String[] args) {
        int[][] matrice = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
        for (int[] riga : matrice) {
            for (int elemento : riga) {
                System.out.print(elemento + " ");
            }
            System.out.println();
        }
    }
}
