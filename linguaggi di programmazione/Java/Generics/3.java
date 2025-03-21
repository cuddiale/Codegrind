// Creare una classe generica `Coppia` che può contenere due oggetti di qualsiasi tipo.

public class Coppia<T, U> {
    private T primo;
    private U secondo;

    public Coppia(T primo, U secondo) {
        this.primo = primo;
        this.secondo = secondo;
    }

    public T getPrimo() {
        return primo;
    }

    public U getSecondo() {
        return secondo;
    }

    public static void main(String[] args) {
        Coppia<String, Integer> coppia = new Coppia<>("Ciao", 123);
        System.out.println("Primo: " + coppia.getPrimo());
        System.out.println("Secondo: " + coppia.getSecondo());
    }
}