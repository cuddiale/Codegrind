// Creare un metodo generico che accetta due parametri di tipi diversi e li stampa.

public class MetodoGenericoMultiplo {
    public static <T, U> void stampa(T primo, U secondo) {
        System.out.println("Primo: " + primo);
        System.out.println("Secondo: " + secondo);
    }

    public static void main(String[] args) {
        stampa("Ciao", 123);
        stampa(3.14, "Mondo");
    }
}