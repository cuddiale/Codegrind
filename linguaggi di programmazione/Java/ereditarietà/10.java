// Creare una classe Studente con un campo matricola e un metodo mostraMatricola per visualizzare la matricola dello studente:

public class Studente {
    protected int matricola;

    public Studente(int matricola) {
        this.matricola = matricola;
    }

    public void mostraMatricola() {
        System.out.println("Matricola: " + matricola);
    }
}

public static void main(String[] args) {
    Studente studente = new Studente(12345);
    studente.mostraMatricola();
}