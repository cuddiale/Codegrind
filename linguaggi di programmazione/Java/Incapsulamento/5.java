// Creare una classe `Studente` con attributi privati `nome`, `cognome` e `matricola`, e fornire metodi per accedere e modificare questi attributi.

public class Studente {
    private String nome;
    private String cognome;
    private String matricola;

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getCognome() {
        return cognome;
    }

    public void setCognome(String cognome) {
        this.cognome = cognome;
    }

    public String getMatricola() {
        return matricola;
    }

    public void setMatricola(String matricola) {
        this.matricola = matricola;
    }

    public static void main(String[] args) {
        Studente studente = new Studente();
        studente.setNome("Mario");
        studente.setCognome("Rossi");
        studente.setMatricola("12345");
        System.out.println("Nome: " + studente.getNome());
        System.out.println("Cognome: " + studente.getCognome());
        System.out.println("Matricola: " + studente.getMatricola());
    }
}