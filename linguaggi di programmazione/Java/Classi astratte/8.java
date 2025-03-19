// Creare una classe Lampada che estende la classe Dispositivo e implementa il metodo accendi per accendere la lampada:

public class Lampada extends Dispositivo {
    public void accendi() {
        System.out.println("Lampada accesa");
    }

    public static void main(String[] args) {
        Lampada lampada = new Lampada();
        lampada.accendi();
    }
}
