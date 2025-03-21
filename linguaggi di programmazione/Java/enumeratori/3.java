// Aggiungere metodi e campi agli enumeratori:

enum Mesi {
    GENNAIO("Gennaio"), FEBBRAIO("Febbraio"), MARZO("Marzo");

    private final String nomeItaliano;

    Mesi(String nomeItaliano) {
        this.nomeItaliano = nomeItaliano;
    }

    public String getNomeItaliano() {
        return nomeItaliano;
    }
}

public static void main(String[] args) {
    Mesi mese = Mesi.GENNAIO;

    System.out.println("Nome italiano: " + mese.getNomeItaliano());
}