// Creare un'annotazione `@Handler` con un elemento `handlerClass` e applicarla a una classe.

// Definizione dell'annotazione
import java.lang.annotation.*;

@Retention(RetentionPolicy.RUNTIME)
@Target(ElementType.TYPE)
public @interface Handler {
    Class<?> handlerClass();
}

// Utilizzo dell'annotazione
@Handler(handlerClass = ArticoloHandler.class)
public class Articolo {
    public static void main(String[] args) throws Exception {
        Handler handler = Articolo.class.getAnnotation(Handler.class);
        System.out.println("Handler class: " + handler.handlerClass().getName());
        handler.handlerClass().getDeclaredMethod("handle").invoke(handler.handlerClass().getDeclaredConstructor().newInstance());
    }
}

// Classe di gestione
public class ArticoloHandler {
    public void handle() {
        System.out.println("Handling article");
    }
}