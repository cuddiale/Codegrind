// Utilizzare la reflection per accedere e modificare il valore di un campo privato in una classe.

import java.lang.reflect.Field;

class Persona {
    private String nome = "Mario";
}

public class ReflectionEsempio4 {
    public static void main(String[] args) {
        try {
            Persona persona = new Persona();
            Field campoNome = Persona.class.getDeclaredField("nome");
            campoNome.setAccessible(true);

            System.out.println("Valore originale del campo 'nome': " + campoNome.get(persona));

            campoNome.set(persona, "Luigi");
            System.out.println("Nuovo valore del campo 'nome': " + campoNome.get(persona));
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}