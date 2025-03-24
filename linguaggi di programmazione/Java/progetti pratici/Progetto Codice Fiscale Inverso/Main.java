public class Main {
    public static void main(String[] args) {
        if (args.length != 1) {
            System.out.println("Utilizzo: java Main <codice_fiscale>");
            return;
        }

        String codiceFiscale = args[0].toUpperCase();
        CodiceFiscaleInverso cfi = new CodiceFiscaleInverso(codiceFiscale);

        try {
            cfi.decodifica();
            System.out.println("Cognome: " + cfi.getCognome());
            System.out.println("Nome: " + cfi.getNome());
            System.out.println("Data di Nascita: " + cfi.getDataNascita());
            System.out.println("Sesso: " + cfi.getSesso());
            System.out.println("Comune di Nascita: " + cfi.getComune());
        } catch (IllegalArgumentException e) {
            System.out.println(e.getMessage());
        }
    }
}