// Creare un'interfaccia Ordinabile con un metodo compare che definisce il confronto tra oggetti:

public interface Ordinabile {
    int compare(Object o);
}

public class Persona implements Ordinabile {
    private String nome;

    public Persona(String nome) {
        this.nome = nome;
    }

    public int compare(Object o) {
        Persona altraPersona = (Persona) o;
        return this.nome.compareTo(altraPersona.nome);
    }

    public static void main(String[] args) {
        Persona persona1 = new Persona("Mario");
        Persona persona2 = new Persona("Luigi");

        int confronto = persona1.compare(persona2);
        System.out.println("Confronto: " + confronto);
    }
}