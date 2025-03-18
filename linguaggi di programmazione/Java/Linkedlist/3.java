// Verificare se una LinkedList di caratteri contiene un elemento specifico:

import java.util.LinkedList;

LinkedList<Character> caratteri = new LinkedList<>();
caratteri.add('a');
caratteri.add('b');
caratteri.add('c');

boolean contieneElemento = caratteri.contains('b');

System.out.println("La LinkedList contiene l'elemento 'b': " + contieneElemento);