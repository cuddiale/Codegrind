// Creare una classe Moto che estende la classe Veicolo e aggiunge un campo cilindrata e un metodo mostraCilindrata per visualizzare la cilindrata della moto:

public class Moto extends Veicolo {
    private int cilindrata;

    public Moto(String marca, int cilindrata) {
        super(marca);
        this.cilindrata = cilindrata;
    }

    public void mostraCilindrata() {
        System.out.println("Cilindrata: " + cilindrata + "cc");
    }
}

public static void main(String[] args) {
    Moto moto = new Moto("Honda", 500);
    moto.mostraMarca();
    moto.mostraCilindrata();
}