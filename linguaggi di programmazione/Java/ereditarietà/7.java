// Creare una classe Animale con un metodo emettiSuono che visualizza il suono dell'animale:

public class Animale {
    public void emettiSuono() {
        System.out.println("Suono generico");
    }
}

public static void main(String[] args) {
    Animale animale = new Animale();
    animale.emettiSuono();
}