// Creare una classe `Auto` con attributi privati `marca`, `modello` e `anno`, e fornire metodi per accedere e modificare questi attributi.

public class Auto {
    private String marca;
    private String modello;
    private int anno;

    public String getMarca() {
        return marca;
    }

    public void setMarca(String marca) {
        this.marca = marca;
    }

    public String getModello() {
        return modello;
    }

    public void setModello(String modello) {
        this.modello = modello;
    }

    public int getAnno() {
        return anno;
    }

    public void setAnno(int anno) {
        if (anno > 1885) { // L'anno dell'invenzione della prima automobile
            this.anno = anno;
        } else {
            throw new IllegalArgumentException("Anno non valido.");
        }
    }

    public static void main(String[] args) {
        Auto auto = new Auto();
        auto.setMarca("Toyota");
        auto.setModello("Corolla");
        auto.setAnno(2021);
        System.out.println("Marca: " + auto.getMarca());
        System.out.println("Modello: " + auto.getModello());
        System.out.println("Anno: " + auto.getAnno());
    }
}