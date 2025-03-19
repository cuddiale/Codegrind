// Creare una classe Gatto che estende la classe Animale e implementa il metodo emettiSuono per visualizzare il suono del gatto:

public class Gatto extends Animale {
    public void emettiSuono() {
        System.out.println("Miao miao");
    }

    public static void main(String[] args) {
        Gatto gatto = new Gatto();
        gatto.emettiSuono();
    }
}
