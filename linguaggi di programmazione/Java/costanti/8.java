// Definire una costante di tipo booleano e utilizzarla in una condizione.

public class CostantiBoolean {
    public static final boolean DEBUG = true;

    public static void main(String[] args) {
        if (DEBUG) {
            System.out.println("Modalità debug attiva");
        } else {
            System.out.println("Modalità debug disattiva");
        }
    }
}