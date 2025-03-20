// Convertire un angolo da gradi a radianti e viceversa utilizzando `Math.toRadians` e `Math.toDegrees`.

public class ConversioneAngoli {
    public static void main(String[] args) {
        double angoloGradi = 90;
        double angoloRadianti = Math.toRadians(angoloGradi);
        double angoloGradiConvertito = Math.toDegrees(angoloRadianti);

        System.out.println(angoloGradi + " gradi in radianti è " + angoloRadianti);
        System.out.println(angoloRadianti + " radianti in gradi è " + angoloGradiConvertito);
    }
}