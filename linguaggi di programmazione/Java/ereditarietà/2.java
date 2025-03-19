// Creare una classe Auto che estende la classe Veicolo e aggiunge un campo modello e un metodo mostraModello per visualizzare il modello dell'auto:

public class Auto extends Veicolo {
    private String modello;

    public Auto(String marca, String modello) {
        super(marca);
        this.modello = modello;
    }

    public void mostraModello() {
        System.out.println("Modello: " + modello);
    }
}

public static void main(String[] args) {
    Auto auto = new Auto("Fiat", "Punto");
    auto.mostraMarca();
    auto.mostraModello();
}