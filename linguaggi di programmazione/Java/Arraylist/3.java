// Verificare se un ArrayList di caratteri contiene un elemento specifico:

import java.util.ArrayList;

public class ContieneElementoArrayList {
    public static void main(String[] args) {
        ArrayList<Character> caratteri = new ArrayList<>();
        caratteri.add('a');
        caratteri.add('b');
        caratteri.add('c');

        boolean contieneElemento = caratteri.contains('b');

        System.out.println("L'ArrayList contiene l'elemento 'b': " + contieneElemento);
    }
}