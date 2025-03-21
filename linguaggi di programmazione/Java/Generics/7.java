// Creare una classe generica `Contenitore` con un metodo che accetta un parametro generico e stampare il contenuto.

public class Contenitore<T> {
    private T contenuto;

    public void setContenuto(T contenuto) {
        this.contenuto = contenuto;
    }

    public T getContenuto() {
        return contenuto;
    }

    public static void main(String[] args) {
        Contenitore<String> contenitoreStringa = new Contenitore<>();
        contenitoreStringa.setContenuto("Ciao mondo");
        System.out.println("Contenuto: " + contenitoreStringa.getContenuto());

        Contenitore<Integer> contenitoreIntero = new Contenitore<>();
        contenitoreIntero.setContenuto(42);
        System.out.println("Contenuto: " + contenitoreIntero.getContenuto());
    }
}