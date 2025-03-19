// Dichiarare una variabile `static final` e accedervi da un metodo statico.

public class StaticFinal {
    public static final String COSTANTE = "Valore costante";

    public static void stampaCostante() {
        System.out.println("Costante: " + COSTANTE);
    }

    public static void main(String[] args) {
        StaticFinal.stampaCostante();
    }
}