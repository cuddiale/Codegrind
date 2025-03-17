// Definire costanti in un'interfaccia e utilizzarle in una classe.

public interface Costanti {
    int LUNGHEZZA_MASSIMA = 100;
    String MESSAGGIO_DI_BENVENUTO = "Benvenuto!";
}

public class UtilizzoCostanti implements Costanti {
    public static void main(String[] args) {
        System.out.println("Lunghezza massima: " + LUNGHEZZA_MASSIMA);
        System.out.println(MESSAGGIO_DI_BENVENUTO);
    }
}