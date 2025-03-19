// Creare una classe annidata statica con un metodo statico e chiamarlo dalla classe esterna.

public class EsternaStaticaMetodo {
    static class InternaStatica {
        public static void metodoStatica() {
            System.out.println("Metodo statico della classe annidata");
        }
    }

    public static void main(String[] args) {
        EsternaStaticaMetodo.InternaStatica.metodoStatica();
    }
}