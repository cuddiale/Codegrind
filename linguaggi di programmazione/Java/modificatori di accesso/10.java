// Creare una classe Telefono con un campo marca privato e un metodo setMarca pubblico per impostare il valore del campo:

public class Telefono {
    private String marca;

    public void setMarca(String marca) {
        this.marca = marca;
    }

    public String getMarca() {
        return this.marca;
    }
}

public static void main(String[] args) {
    Telefono telefono = new Telefono();
    telefono.setMarca("Samsung");
    System.out.println("Marca: " + telefono.getMarca());
}
