// Creare una classe immutabile `ClasseConData` che contiene un oggetto `Date` e rendere l'oggetto immutabile.

import java.util.Date;

public final class ClasseConData {
    private final Date data;

    public ClasseConData(Date data) {
        this.data = new Date(data.getTime());
    }

    public Date getData() {
        return new Date(data.getTime());
    }

    public static void main(String[] args) {
        Date data = new Date();
        ClasseConData obj = new ClasseConData(data);
        System.out.println("Data: " + obj.getData());
    }
}