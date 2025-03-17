// Scrivi un programma Java che verifica se un anno è bisestile.

int anno = 2020;
if (anno % 4 == 0 && (anno % 100 != 0 || anno % 400 == 0)) {
    System.out.println("L'anno è bisestile.");
} else {
    System.out.println("L'anno non è bisestile.");
}