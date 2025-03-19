// Creare una classe Studente con un campo matricola pubblico:

public class Studente {
    public int matricola;
}

public static void main(String[] args) {
    Studente studente = new Studente();
    studente.matricola = 12345;
    System.out.println("Matricola: " + studente.matricola);
}