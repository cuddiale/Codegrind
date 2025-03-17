// Stampare gli elementi di una collezione di oggetti utilizzando il ciclo "foreach":

import java.util.ArrayList;
import java.util.List;

public class CicloForEach {
    public static void main(String[] args) {
        List<Persona> persone = new ArrayList<>();
        persone.add(new Persona("Mario", 30));
        persone.add(new Persona("Luca", 25));
        persone.add(new Persona("Anna", 35));
        for (Persona persona : persone) {
            System.out.println(persona.getNome() + " - " + persona.getEta() + " anni");
        }
    }
}

class Persona {
    private String nome;
    private int eta;

    public Persona(String nome, int eta) {
        this.nome = nome;
        this.eta = eta;
    }

    public String getNome() {
        return nome;
    }

    public int getEta() {
        return eta;
    }
}
