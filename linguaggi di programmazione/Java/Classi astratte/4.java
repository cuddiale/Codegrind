// Creare una classe Cane che estende la classe Animale e implementa il metodo emettiSuono per visualizzare il suono del cane:

public class Cane extends Animale {
    public void emettiSuono() {
        System.out.println("Bau bau");
    }

    public static void main(String[] args) {
        Cane cane = new Cane();
        cane.emettiSuono();
    }
}
