// Creare una classe immutabile `ClasseConMap` che contiene una mappa e rendere l'oggetto immutabile.

import java.util.Collections;
import java.util.HashMap;
import java.util.Map;

public final class ClasseConMap {
    private final Map<String, String> valori;

    public ClasseConMap(Map<String, String> valori) {
        this.valori = new HashMap<>(valori);
    }

    public Map<String, String> getValori() {
        return Collections.unmodifiableMap(valori);
    }

    public static void main(String[] args) {
        Map<String, String> mappa = new HashMap<>();
        mappa.put("chiave1", "valore1");
        mappa.put("chiave2", "valore2");
        ClasseConMap obj = new ClasseConMap(mappa);
        System.out.println("Valori: " + obj.getValori());
    }
}