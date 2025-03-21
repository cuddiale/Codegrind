// Utilizzare la reflection per ottenere e stampare le annotazioni presenti su un metodo di una classe.

import java.lang.annotation.*;
import java.lang.reflect.Method;

@Retention(RetentionPolicy.RUNTIME)
@interface Test {
    String value() default "Test";
}

class Esempio {
    @Test(value = "Metodo di test")
    public void metodoDiTest() {
        System.out.println("Esecuzione del metodo di test");
    }
}

public class ReflectionEsempio6 {
    public static void main(String[] args) {
        try {
            Method metodo = Esempio.class.getMethod("metodoDiTest");

            if (metodo.isAnnotationPresent(Test.class)) {
                Test annotazione = metodo.getAnnotation(Test.class);
                System.out.println("Annotazione trovata: " + annotazione.value());
            }

            Esempio esempio = new Esempio();
            metodo.invoke(esempio);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}