// Dichiarare una variabile `static` in una classe e accedervi da un metodo statico e non statico.

public class VariabileStatica {
    public static int contatore = 0;

    public VariabileStatica() {
        contatore++;
    }

    public static void stampaContatore() {
        System.out.println("Contatore: " + contatore);
    }

    public static void main(String[] args) {
        VariabileStatica vs1 = new VariabileStatica();
        VariabileStatica vs2 = new VariabileStatica();
        VariabileStatica.stampaContatore();
    }
}