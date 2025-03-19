// Creare una classe Impiegato con un campo stipendio pubblico:

public class Impiegato {
    public double stipendio;
}

public static void main(String[] args) {
    Impiegato impiegato = new Impiegato();
    impiegato.stipendio = 2500.0;
    System.out.println("Stipendio: " + impiegato.stipendio);
}