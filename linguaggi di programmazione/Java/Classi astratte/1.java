// Creare una classe astratta Veicolo con un metodo astratto calcolaVelocita che restituisce la velocità del veicolo:

public abstract class Veicolo {
    public abstract double calcolaVelocita();

    public static void main(String[] args) {
        Veicolo veicolo = new Veicolo() {
            public double calcolaVelocita() {
                return 0;
            }
        };

        double velocita = veicolo.calcolaVelocita();
        System.out.println("Velocità veicolo: " + velocita);
    }
}