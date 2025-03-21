// Utilizzare la reflection per ottenere e stampare i nomi di tutti i metodi dichiarati in una classe.

import java.lang.reflect.Method;

public class ReflectionEsempio2 {
    public static void main(String[] args) {
        Class<?> classe = String.class;
        Method[] metodi = classe.getDeclaredMethods();

        System.out.println("Metodi della classe String:");
        for (Method metodo : metodi) {
            System.out.println(metodo.getName());
        }
    }
}