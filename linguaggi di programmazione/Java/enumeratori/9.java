// Utilizzare un enumeratore come costante in una classe:

enum Costanti {
    PI_GRECO(3.14159), EULERO(2.71828);

    private final double valore;

    Costanti(double valore) {
        this.valore = valore;
    }

    public double getValore() {
        return valore;
    }
}

public static void main(String[] args) {
    double pi = Costanti.PI_GRECO.getValore();
    double eulero = Costanti.EULERO.getValore();

    System.out.println("Valore di pi greco: " + pi);
    System.out.println("Valore di eulero: " + eulero);
}