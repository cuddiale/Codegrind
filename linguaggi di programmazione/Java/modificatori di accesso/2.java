// Creare una classe Automobile con un campo marca protetto e un metodo mostraMarca pubblico per accedere al valore del campo:

public class Automobile {
    protected String marca;

    public Automobile(String marca) {
        this.marca = marca;
    }

    public void mostraMarca() {
        System.out.println("Marca: " + marca);
    }
}

public static void main(String[] args) {
    Automobile automobile = new Automobile("Fiat");
    automobile.mostraMarca();
}