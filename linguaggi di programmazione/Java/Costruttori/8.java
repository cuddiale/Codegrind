// Utilizzare un costruttore per inizializzare gli attributi di una classe e stamparne i valori.

public class Studente {
    private String nome;
    private int matricola;

    public Studente(String nome, int matricola) {
        this.nome = nome;
        this.matricola = matricola;
    }

    public String getNome() {
        return nome;
    }

    public int getMatricola() {
        return matricola;
    }

    public static void main(String[] args) {
        Studente studente = new Studente("Alice", 12345);
        System.out.println("Nome: " + studente.getNome());
        System.out.println("Matricola: " + studente.getMatricola());
    }
}