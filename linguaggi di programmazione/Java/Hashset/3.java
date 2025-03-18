// Verificare se un HashSet di caratteri contiene un elemento specifico:

import java.util.HashSet;

HashSet<Character> caratteri = new HashSet<>();
caratteri.add('a');
caratteri.add('b');
caratteri.add('c');

boolean contieneElemento = caratteri.contains('b');

System.out.println("L'HashSet contiene l'elemento 'b': " + contieneElemento);