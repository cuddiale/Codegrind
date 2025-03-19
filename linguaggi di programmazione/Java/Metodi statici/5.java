// Creare una classe con un attributo statico `contatore` e un metodo statico che incrementa e restituisce il contatore.

public class Contatore {
    private static int contatore = 0;

    public static int incrementa() {
        return ++contatore;
    }

    public static void main(String[] args) {
        System.out.println("Contatore: " + Contatore.incrementa());
        System.out.println("Contatore: " + Contatore.incrementa());
    }
}