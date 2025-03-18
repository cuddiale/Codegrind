// Copiare gli elementi di una LinkedList in una nuova LinkedList:

import java.util.LinkedList;

LinkedList<Integer> numeri1 = new LinkedList<>();
numeri1.add(1);
numeri1.add(2);
numeri1.add(3);

LinkedList<Integer> numeri2 = new LinkedList<>(numeri1);

System.out.println("Numeri1: " + numeri1);
System.out.println("Numeri2: " + numeri2);