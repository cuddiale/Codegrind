// Creare un'annotazione `@NotNull` e applicarla a un parametro di metodo, quindi verificare il valore del parametro a runtime.

// Definizione dell'annotazione
import java.lang.annotation.*;

@Retention(RetentionPolicy.RUNTIME)
@Target(ElementType.PARAMETER)
public @interface NotNull {
}

// Utilizzo dell'annotazione
public class ValidaParametro {

    public void stampa(@NotNull String messaggio) {
        if (messaggio == null) {
            throw new IllegalArgumentException("Il parametro non può essere null");
        }
        System.out.println(messaggio);
    }

    public static void main(String[] args) {
        ValidaParametro vp = new ValidaParametro();
        vp.stampa("Ciao mondo");  // Questo funziona
        vp.stampa(null);  // Questo lancerà un'eccezione
    }
}