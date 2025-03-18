// Svuotare una LinkedList di oggetti:

import java.util.LinkedList;

LinkedList<Integer> numeri = new LinkedList<>();
numeri.add(1);
numeri.add(2);
numeri.add(3);

numeri.clear();

System.out.println("La LinkedList è stata svuotata: " + numeri);