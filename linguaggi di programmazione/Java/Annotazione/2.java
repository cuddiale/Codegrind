// Creare un'annotazione `@Autore` con elementi `nome` e `data` e applicarla a una classe.

// Definizione dell'annotazione
import java.lang.annotation.*;

@Retention(RetentionPolicy.RUNTIME)
@Target(ElementType.TYPE)
public @interface Autore {
    String nome();
    String data();
}

// Utilizzo dell'annotazione
@Autore(nome = "Mario Rossi", data = "12/07/2024")
public class Libro {
    public static void main(String[] args) {
        Autore autore = Libro.class.getAnnotation(Autore.class);
        System.out.println("Autore: " + autore.nome());
        System.out.println("Data: " + autore.data());
    }
}