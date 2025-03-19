// Creare una classe immutabile `ClasseConCustom` che contiene un oggetto di tipo custom e rendere l'oggetto immutabile.

public final class ClasseConCustom {
    private final CustomOggetto customOggetto;

    public ClasseConCustom(CustomOggetto customOggetto) {
        this.customOggetto = new CustomOggetto(customOggetto.getValore());
    }

    public CustomOggetto getCustomOggetto() {
        return new CustomOggetto(customOggetto.getValore());
    }

    public static void main(String[] args) {
        CustomOggetto co = new CustomOggetto(5);
        ClasseConCustom obj = new ClasseConCustom(co);
        System.out.println("CustomOggetto: " + obj.getCustomOggetto().getValore());
    }
}

class CustomOggetto {
    private final int valore;

    public CustomOggetto(int valore) {
        this.valore = valore;
    }

    public int getValore() {
        return valore;
    }
}