// Creare una classe immutabile `ClasseConCostruttoreStatico` che utilizza un metodo statico per creare un'istanza.

public final class ClasseConCostruttoreStatico {
    private final String nome;
    private final int eta;

    private ClasseConCostruttoreStatico(String nome, int eta) {
        this.nome = nome;
        this.eta = eta;
    }

    public static ClasseConCostruttoreStatico creaIstanza(String nome, int eta) {
        return new ClasseConCostruttoreStatico(nome, eta);
    }

    public String getNome() {
        return nome;
    }

    public int getEta() {
        return eta;
    }

    public static void main(String[] args) {
        ClasseConCostruttoreStatico obj = ClasseConCostruttoreStatico.creaIstanza("Luigi", 25);
        System.out.println("Nome: " + obj.getNome());
        System.out.println("Età: " + obj.getEta());
    }
}