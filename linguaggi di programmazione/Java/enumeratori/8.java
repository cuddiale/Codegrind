// Utilizzare enumeratori all'interno di una classe:

enum Mesi {
    GENNAIO, FEBBRAIO, MARZO
}

static class Calendario {
    private Mesi meseCorrente;

    public Calendario(Mesi meseCorrente) {
        this.meseCorrente = meseCorrente;
    }

    public void stampaMeseCorrente() {
        System.out.println("Mese corrente: " + meseCorrente);
    }
}

public static void main(String[] args) {
    Calendario calendario = new Calendario(Mesi.GENNAIO);
    calendario.stampaMeseCorrente();
}