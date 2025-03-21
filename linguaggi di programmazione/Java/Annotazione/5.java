// Creare un'annotazione `@Version` con un elemento `value` con valore di default.

// Definizione dell'annotazione
import java.lang.annotation.*;

@Retention(RetentionPolicy.RUNTIME)
@Target(ElementType.TYPE)
public @interface Version {
    String value() default "1.0";
}

// Utilizzo dell'annotazione
@Version
public class Software {
    public static void main(String[] args) {
        Version version = Software.class.getAnnotation(Version.class);
        System.out.println("Versione: " + version.value());
    }
}