// Creare una classe Televisore che estende la classe Dispositivo e implementa il metodo accendi per accendere il televisore:

public class Televisore extends Dispositivo {
    public void accendi() {
        System.out.println("Televisore acceso");
    }

    public static void main(String[] args) {
        Televisore televisore = new Televisore();
        televisore.accendi();
    }
}