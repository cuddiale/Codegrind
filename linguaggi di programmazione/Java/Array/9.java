// Calcolare la somma di due array elemento per elemento:

public class SommaArrayElementi {
    public static void main(String[] args) {
        int[] array1 = {1, 2, 3, 4, 5};
        int[] array2 = {5, 4, 3, 2, 1};
        int[] sommaArray = new int[array1.length];
        for (int i = 0; i < array1.length; i++) {
            sommaArray[i] = array1[i] + array2[i];
        }
        System.out.println("Somma degli array: " + Arrays.toString(sommaArray));
    }
}