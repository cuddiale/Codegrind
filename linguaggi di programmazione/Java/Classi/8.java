// Creare una classe Calendario con metodi per determinare se un anno è bisestile e per ottenere il numero di giorni in un mese:

public class Calendario {
    public boolean isAnnoBisestile(int anno) {
        return (anno % 4 == 0 && anno % 100 != 0) || (anno % 400 == 0);
    }

    public int getNumeroGiorniMese(int mese, int anno) {
        switch (mese) {
            case 1: // Gennaio
            case 3: // Marzo
            case 5: // Maggio
            case 7: // Luglio
            case 8: // Agosto
            case 10: // Ottobre
            case 12: // Dicembre
                return 31;
            case 4: // Aprile
            case 6: // Giugno
            case 9: // Settembre
            case 11: // Novembre
                return 30;
            case 2: // Febbraio
                return isAnnoBisestile(anno) ? 29 : 28;
            default:
                return -1; // Mese non valido
        }
    }
}

public static void main(String[] args) {
    Calendario calendario = new Calendario();

    int anno = 2023;
    int mese = 2;

    boolean isBisestile = calendario.isAnnoBisestile(anno);
    int numeroGiorniMese = calendario.getNumeroGiorniMese(mese, anno);

    System.out.println("L'anno " + anno + " è bisestile? " + isBisestile);
    System.out.println("Numero di giorni nel mese " + mese + ": " + numeroGiorniMese);
}