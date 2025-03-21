// Creare un'annotazione `@Tag` che può essere applicata più volte allo stesso elemento.

// Definizione dell'annotazione
import java.lang.annotation.*;

@Retention(RetentionPolicy.RUNTIME)
@Target(ElementType.TYPE)
@Repeatable(Tags.class)
public @interface Tag {
    String value();
}

@Retention(RetentionPolicy.RUNTIME)
@Target(ElementType.TYPE)
public @interface Tags {
    Tag[] value();
}

// Utilizzo dell'annotazione
@Tag("Java")
@Tag("Programmazione")
public class Articolo {
    public static void main(String[] args) {
        Tag[] tags = Articolo.class.getAnnotationsByType(Tag.class);
        for (Tag tag : tags) {
            System.out.println("Tag: " + tag.value());
        }
    }
}