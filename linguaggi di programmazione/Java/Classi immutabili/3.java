// Creare una classe immutabile `ClasseConArray` che contiene un array e rendere l'oggetto immutabile.

import java.util.Arrays;

public final class ClasseConArray {
    private final int[] valori;

    public ClasseConArray(int[] valori) {
        this.valori = valori.clone();
    }

    public int[] getValori() {
        return valori.clone();
    }

    public static void main(String[] args) {
        int[] array = {1, 2, 3};
        ClasseConArray obj = new ClasseConArray(array);
        System.out.println("Valori: " + Arrays.toString(obj.getValori()));
    }
}