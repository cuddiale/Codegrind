// Concatenare due stringhe utilizzando un' espressione lambda:

public class ConcatenaStringheLambda {
    public static void main(String[] args) {
        ConcatenatoreStringhe concatenatore = (s1, s2) -> s1 + s2;

        String stringa1 = "Ciao";
        String stringa2 = "Mondo!";

        String risultato = concatenatore.concatena(stringa1, stringa2);

        System.out.println("Risultato: " + risultato);
    }

    interface ConcatenatoreStringhe {
        String concatena(String s1, String s2);
    }
}
