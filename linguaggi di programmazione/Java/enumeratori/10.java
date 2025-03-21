// Utilizzare un enumeratore per definire le costanti di una classe:

static final int DURATA_MINUTI = 60;

enum GiorniSettimana {
    LUNEDI(DURATA_MINUTI * 24), MARTEDI(DURATA_MINUTI * 24), MERCOLEDI(DURATA_MINUTI * 24),
    GIOVEDI(DURATA_MINUTI * 24), VENERDI(DURATA_MINUTI * 24),
    SABATO(DURATA_MINUTI * 24), DOMENICA(DURATA_MINUTI * 24);

    private final int durataMinuti;

    GiorniSettimana(int durataMinuti) {
        this.durataMinuti = durataMinuti;
    }

    public int getDurataMinuti() {
        return durataMinuti;
    }
}

public static void main(String[] args) {
    GiorniSettimana giorno = GiorniSettimana.MARTEDI;
    int durataMinuti = giorno.getDurataMinuti();

    System.out.println("Durata in minuti di un giorno: " + durataMinuti);
}