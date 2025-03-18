// Calcolare l'area di un cerchio utilizzando un' espressione lambda:

public class CalcolaAreaCerchioLambda {
    public static void main(String[] args) {
        CalcolatoreArea calcolatore = raggio -> Math.PI * raggio * raggio;

        double raggio = 2.5;

        double area = calcolatore.calcola(raggio);

        System.out.println("L'area del cerchio è: " + area);
    }

    interface CalcolatoreArea {
        double calcola(double raggio);
    }
}
