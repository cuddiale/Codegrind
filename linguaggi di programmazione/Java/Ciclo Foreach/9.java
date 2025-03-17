// Contare il numero di occorrenze di una parola in un array di stringhe utilizzando il ciclo "foreach":

public class CicloForEach {
    public static void main(String[] args) {
        String[] parole = {"casa", "cane", "gatto", "casa", "casa"};
        String parolaDaContare = "casa";
        int conteggio = 0;
        for (String parola : parole) {
            if (parola.equals(parolaDaContare)) {
                conteggio++;
            }
        }
        System.out.println("Il numero di occorrenze di \"" + parolaDaContare + "\" è: " + conteggio);
    }
}