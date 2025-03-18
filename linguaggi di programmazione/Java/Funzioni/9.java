// Verificare se un anno è bisestile utilizzando una funzione:

public class AnnoBisestile {
    public static void main(String[] args) {
        int anno = 2024;

        boolean isBisestile = isAnnoBisestile(anno);

        if (isBisestile) {
            System.out.println("L'anno è bisestile.");
        } else {
            System.out.println("L'anno non è bisestile.");
        }
    }

    public static boolean isAnnoBisestile(int anno) {
        if ((anno % 4 == 0 && anno % 100 != 0) || anno % 400 == 0) {
            return true;
        } else {
            return false;
        }
    }
}