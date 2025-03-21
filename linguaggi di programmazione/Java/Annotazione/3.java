// Creare un'annotazione `@Test` e applicarla a un metodo.

// Definizione dell'annotazione
import java.lang.annotation.*;

@Retention(RetentionPolicy.RUNTIME)
@Target(ElementType.METHOD)
public @interface Test {
}

// Utilizzo dell'annotazione
public class TestEsempio {

    @Test
    public void testMetodo() {
        System.out.println("Metodo di test eseguito");
    }

    public static void main(String[] args) throws Exception {
        for (Method method : TestEsempio.class.getMethods()) {
            if (method.isAnnotationPresent(Test.class)) {
                method.invoke(new TestEsempio());
            }
        }
    }
}