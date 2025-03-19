// Creare una classe immutabile `ClasseConList` che contiene una lista e rendere l'oggetto immutabile.

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public final class ClasseConList {
    private final List<String> valori;

    public ClasseConList(List<String> valori) {
        this.valori = new ArrayList<>(valori);
    }

    public List<String> getValori() {
        return Collections.unmodifiableList(valori);
    }

    public static void main(String[] args) {
        List<String> lista = new ArrayList<>();
        lista.add("a");
        lista.add("b");
        ClasseConList obj = new ClasseConList(lista);
        System.out.println("Valori: " + obj.getValori());
    }
}