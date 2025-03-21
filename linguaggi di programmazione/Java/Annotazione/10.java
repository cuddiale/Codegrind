// Creare un'annotazione `@Documentazione` con elementi `autore` e `descrizione` e applicarla a una classe.

// Definizione dell'annotazione
import java.lang.annotation.*;

@Retention(RetentionPolicy.RUNTIME)
@Target(ElementType.TYPE)
public @interface Documentazione {
    String autore();
    String descrizione();
}

// Utilizzo dell'annotazione
@Documentazione(autore = "Mario Rossi", descrizione = "Classe di esempio per documentazione")
public class EsempioDocumentato {
    public static void main(String[] args) {
        Documentazione doc = EsempioDocumentato.class.getAnnotation(Documentazione.class);
        System.out.println("Autore: " + doc.autore());
        System.out.println("Descrizione: " + doc.descrizione());
    }
}