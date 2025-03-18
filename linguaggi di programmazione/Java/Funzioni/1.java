// Calcolare l'area di un rettangolo utilizzando una funzione:

public class CalcolaAreaRettangolo {
    public static void main(String[] args) {
        double base = 5.0;
        double altezza = 3.0;

        double area = calcolaAreaRettangolo(base, altezza);

        System.out.println("L'area del rettangolo è: " + area);
    }

    public static double calcolaAreaRettangolo(double base, double altezza) {
        return base * altezza;
    }
}