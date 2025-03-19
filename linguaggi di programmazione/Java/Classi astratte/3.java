// Creare una classe astratta Animale con un metodo astratto emettiSuono che visualizza il suono dell'animale:

public abstract class Animale {
    public abstract void emettiSuono();

    public static void main(String[] args) {
        Animale animale = new Animale() {
            public void emettiSuono() {
                System.out.println("Suono generico");
            }
        };

        animale.emettiSuono();
    }
}