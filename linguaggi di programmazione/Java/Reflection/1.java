// Creare un oggetto di una classe e utilizzare la reflection per ottenere e stampare il nome della classe.

public class ReflectionEsempio1 {
    public static void main(String[] args) {
        String str = "Ciao, mondo!";
        Class<?> classe = str.getClass();
        System.out.println("Nome della classe: " + classe.getName());
    }
}