// Creare una semplice annotazione `@Info` con un elemento `value` e applicarla a una classe.

// Definizione dell'annotazione
import java.lang.annotation.*;

@Retention(RetentionPolicy.RUNTIME)
@Target(ElementType.TYPE)
public @interface Info {
    String value();
}

// Utilizzo dell'annotazione
@Info("Questa è una classe di esempio")
public class Esempio {
    public static void main(String[] args) {
        Info info = Esempio.class.getAnnotation(Info.class);
        System.out.println("Annotazione Info: " + info.value());
    }
}