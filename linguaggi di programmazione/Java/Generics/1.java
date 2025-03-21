// Creare una classe generica `Box` che può contenere un oggetto di qualsiasi tipo.

public class Box<T> {
    private T contenuto;

    public void setContenuto(T contenuto) {
        this.contenuto = contenuto;
    }

    public T getContenuto() {
        return contenuto;
    }

    public static void main(String[] args) {
        Box<String> boxStringa = new Box<>();
        boxStringa.setContenuto("Ciao");
        System.out.println("Contenuto: " + boxStringa.getContenuto());

        Box<Integer> boxIntero = new Box<>();
        boxIntero.setContenuto(123);
        System.out.println("Contenuto: " + boxIntero.getContenuto());
    }
}