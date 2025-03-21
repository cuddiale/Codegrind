// Creare un'annotazione `@Priorità` con un elemento `livello` di tipo `Enum` e applicarla a un metodo.

// Definizione dell'annotazione e dell'enum
import java.lang.annotation.*;

enum Livello {
    ALTO, MEDIO, BASSO
}

@Retention(RetentionPolicy.RUNTIME)
@Target(ElementType.METHOD)
public @interface Priorità {
    Livello livello() default Livello.MEDIO;
}

// Utilizzo dell'annotazione
public class Task {

    @Priorità(livello = Livello.ALTO)
    public void taskImportante() {
        System.out.println("Task importante eseguito");
    }

    @Priorità
    public void taskNormale() {
        System.out.println("Task normale eseguito");
    }

    public static void main(String[] args) throws Exception {
        for (Method method : Task.class.getMethods()) {
            if (method.isAnnotationPresent(Priorità.class)) {
                Priorità priorità = method.getAnnotation(Priorità.class);
                System.out.println("Esecuzione " + method.getName() + " con priorità " + priorità.livello());
                method.invoke(new Task());
            }


        }
    }
}