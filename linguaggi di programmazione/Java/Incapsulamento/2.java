// Modificare la classe `Persona` per aggiungere validazione nei metodi setter.

public class Persona {
    private String nome;
    private int eta;

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        if (nome != null && !nome.isEmpty()) {
            this.nome = nome;
        } else {
            throw new IllegalArgumentException("Il nome non può essere vuoto.");
        }
    }

    public int getEta() {
        return eta;
    }

    public void setEta(int eta) {
        if (eta > 0) {
            this.eta = eta;
        } else {
            throw new IllegalArgumentException("L'età deve essere positiva.");
        }
    }

    public static void main(String[] args) {
        Persona persona = new Persona();
        try {
            persona.setNome("Mario");
            persona.setEta(30);
            System.out.println("Nome: " + persona.getNome());
            System.out.println("Età: " + persona.getEta());
        } catch (IllegalArgumentException e) {
            System.out.println(e.getMessage());
        }
    }
}