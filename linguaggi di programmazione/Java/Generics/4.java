// Creare una classe generica che accetta solo tipi che estendono `Number`.

public class NumeroBox<T extends Number> {
    private T numero;

    public NumeroBox(T numero) {
        this.numero = numero;
    }

    public T getNumero() {
        return numero;
    }

    public static void main(String[] args) {
        NumeroBox<Integer> boxIntero = new NumeroBox<>(123);
        System.out.println("Numero: " + boxIntero.getNumero());

        NumeroBox<Double> boxDouble = new NumeroBox<>(3.14);
        System.out.println("Numero: " + boxDouble.getNumero());
    }
}