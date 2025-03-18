// Creare una classe Auto con campi marca e modello:

public class Auto {
    private String marca;
    private String modello;

    public Auto(String marca, String modello) {
        this.marca = marca;
        this.modello = modello;
    }

    public void mostraDettagli() {
        System.out.println("Marca: " + marca);
        System.out.println("Modello: " + modello);
    }
}

public static void main(String[] args) {
    Auto auto = new Auto("Fiat", "Punto");
    auto.mostraDettagli();
}