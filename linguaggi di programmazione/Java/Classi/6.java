// Creare una classe Studente con campi nome, cognome e matricola:

public class Studente {
    private String nome;
    private String cognome;
    private int matricola;

    public Studente(String nome, String cognome, int matricola) {
        this.nome = nome;
        this.cognome = cognome;
        this.matricola = matricola;
    }

    public void mostraDettagli() {
        System.out.println("Nome: " + nome);
        System.out.println("Cognome: " + cognome);
        System.out.println("Matricola: " + matricola);
    }
}

public static void main(String[] args) {
    Studente studente = new Studente("Mario", "Rossi", 12345);
    studente.mostraDettagli();
}
