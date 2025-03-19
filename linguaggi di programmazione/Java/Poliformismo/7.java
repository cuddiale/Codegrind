// Creare una classe Gatto che estende la classe Animal e sovrascrive il metodo emettiSuono per visualizzare il suono del gatto:

public class Gatto extends Animal {
    public void emettiSuono() {
        System.out.println("Miao miao");
    }
}

public static void main(String[] args) {
    Animal gatto = new Gatto();
    gatto.emettiSuono();
}