// Creare un'annotazione `@DefaultValue` con un elemento `value` e applicarla a un campo.

// Definizione dell'annotazione
import java.lang.annotation.*;

@Retention(RetentionPolicy.RUNTIME)
@Target(ElementType.FIELD)
public @interface DefaultValue {
    String value();
}

// Utilizzo dell'annotazione
public class Configurazione {

    @DefaultValue("localhost")
    private String host;

    public static void main(String[] args) throws Exception {
        Configurazione config = new Configurazione();
        for (Field field : Configurazione.class.getDeclaredFields()) {
            if (field.isAnnotationPresent(DefaultValue.class)) {
                DefaultValue defaultValue = field.getAnnotation(DefaultValue.class);
                field.setAccessible(true);
                field.set(config, defaultValue.value());
            }
        }
        System.out.println("Host: " + config.host);
    }
}