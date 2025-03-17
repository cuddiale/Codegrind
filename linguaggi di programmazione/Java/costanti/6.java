// Creare un `enum` con costanti e utilizzarle in una classe.

public enum Giorno {
    LUNEDI, MARTEDI, MERCOLEDI, GIOVEDI, VENERDI, SABATO, DOMENICA
}

public class UtilizzoEnum {
    public static void main(String[] args) {
        Giorno oggi = Giorno.MERCOLEDI;
        System.out.println("Oggi è: " + oggi);
    }
}