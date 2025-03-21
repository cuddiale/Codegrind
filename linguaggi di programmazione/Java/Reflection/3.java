// Creare un oggetto di una classe e utilizzare la reflection per invocare un metodo su di esso.

import java.lang.reflect.Method;

public class ReflectionEsempio3 {
    public static void main(String[] args) {
        try {
            String str = "Hello, world!";
            Method metodo = String.class.getMethod("toUpperCase");
            String risultato = (String) metodo.invoke(str);
            System.out.println("Risultato: " + risultato);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}