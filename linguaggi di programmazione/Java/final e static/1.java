// Dichiarare una variabile `final` e tentare di modificarne il valore.

public class VariabileFinal {
    public static void main(String[] args) {
        final int COSTANTE = 10;
        System.out.println("Valore della costante: " + COSTANTE);

        // Prova a modificare la variabile final
        // COSTANTE = 20; // Questo causerà un errore di compilazione
    }
}