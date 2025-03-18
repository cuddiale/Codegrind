// Trovare la posizione di un elemento in un array:

public class TrovaPosizioneElemento {
    public static void main(String[] args) {
        String[] parole = {"casa", "cane", "gatto", "auto", "albero"};
        String parolaDaCercare = "gatto";
        int posizione = -1;
        for (int i = 0; i < parole.length; i++) {
            if (parole[i].equals(parolaDaCercare)) {
                posizione = i;
                break;
            }
        }
        System.out.println("La parola \"" + parolaDaCercare + "\" si trova nella posizione " + posizione);
    }
}
