// Contare il numero di occorrenze di un elemento in un array di stringhe:

public class ContaOccorrenzeArray {
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