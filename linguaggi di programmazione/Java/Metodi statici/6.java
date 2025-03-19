// Creare una classe con un metodo statico che accetta due oggetti `Persona` e restituisce il nome della persona più anziana.

class Persona {
    private String nome;
    private int eta;

    public Persona(String nome, int eta) {
        this.nome = nome;
        this.eta = eta;
    }

    public int getEta() {
        return eta;
    }

    public String getNome() {
        return nome;
    }
}

public class ComparatorePersona {
    public static String trovaPiuAnziano(Persona p1, Persona p2) {
        return (p1.getEta() > p2.getEta()) ? p1.getNome() : p2.getNome();
    }

    public static void main(String[] args) {
        Persona persona1 = new Persona("Mario", 30);
        Persona persona2 = new Persona("Luigi", 35);
        String piuAnziano = ComparatorePersona.trovaPiuAnziano(persona1, persona2);
        System.out.println("La persona più anziana è: " + piuAnziano);
    }
}