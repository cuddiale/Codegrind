// Utilizzare la reflection per creare un'istanza di una classe usando il suo costruttore predefinito.

public class ReflectionEsempio5 {
    public static void main(String[] args) {
        try {
            Class<?> classe = Class.forName("java.util.Date");
            Object oggetto = classe.getDeclaredConstructor().newInstance();
            System.out.println("Oggetto creato: " + oggetto.toString());
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}