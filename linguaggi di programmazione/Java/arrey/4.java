// Calcolare la media degli elementi di un array di numeri float:

public class MediaArray {
    public static void main(String[] args) {
        float[] numeri = {2.5f, 3.7f, 4.2f, 5.1f, 1.8f};
        float somma = 0;
        for (float numero : numeri) {
            somma += numero;
        }
        float media = somma / numeri.length;
        System.out.println("La media degli elementi dell'array è: " + media);
    }
}