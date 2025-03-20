// Calcolare il seno e il coseno di un angolo (espresso in radianti) utilizzando `Math.sin` e `Math.cos`.

public class SenoCoseno {
    public static void main(String[] args) {
        double angolo = Math.toRadians(45); // Convertire 45 gradi in radianti
        double seno = Math.sin(angolo);
        double coseno = Math.cos(angolo);
        System.out.println("Il seno di 45 gradi è " + seno);
        System.out.println("Il coseno di 45 gradi è " + coseno);
    }
}