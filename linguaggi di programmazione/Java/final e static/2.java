// Creare un metodo statico in una classe e chiamarlo senza creare un'istanza della classe.

public class MetodoStatico {
    public static void stampaMessaggio() {
        System.out.println("Metodo statico chiamato.");
    }

    public static void main(String[] args) {
        MetodoStatico.stampaMessaggio();  // Chiamata al metodo statico
    }
}