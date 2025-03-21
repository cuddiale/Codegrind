// Creare un metodo generico che accetta un parametro di qualsiasi tipo e lo stampa.

public class MetodoGenerico {
    public static <T> void stampa(T elemento) {
        System.out.println("Elemento: " + elemento);
    }

    public static void main(String[] args) {
        stampa("Ciao");
        stampa(123);
        stampa(3.14);
    }
}