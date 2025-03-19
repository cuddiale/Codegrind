// Creare una classe Cane che estende la classe Animal e sovrascrive il metodo emettiSuono per visualizzare il suono del cane:

public class Cane extends Animal {
    public void emettiSuono() {
        System.out.println("Bau bau");
    }
}

public static void main(String[] args) {
    Animal cane = new Cane();
    cane.emettiSuono();
}