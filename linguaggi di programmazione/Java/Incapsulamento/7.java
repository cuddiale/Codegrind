// Creare una classe `Prod
// ottocon attributi privatinome, categoriaeprezzo`, e fornire metodi per accedere e modificare questi attributi.

public class Prodotto {
    private String nome;
    private String categoria;
    private double prezzo;

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getCategoria() {
        return categoria;
    }

    public void setCategoria(String categoria) {
        this.categoria = categoria;
    }

    public double getPrezzo() {
        return prezzo;
    }

    public void setPrezzo(double prezzo) {
        if (prezzo > 0) {
            this.prezzo = prezzo;
        } else {
            throw new IllegalArgumentException("Il prezzo deve essere positivo.");
        }
    }

    public static void main(String[] args) {
        Prodotto prodotto = new Prodotto();
        prodotto.setNome("Laptop");
        prodotto.setCategoria("Elettronica");
        prodotto.setPrezzo(799.99);
        System.out.println("Nome: " + prodotto.getNome());
        System.out.println("Categoria: " + prodotto.getCategoria());
        System.out.println("Prezzo: " + prodotto.getPrezzo());
    }
}