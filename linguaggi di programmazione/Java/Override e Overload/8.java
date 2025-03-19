// Creare una classe `Veicolo` con un metodo `muovi` e una classe derivata `Auto` che sovrascrive `muovi` e aggiunge metodi sovraccaricati `muovi`.

class Veicolo {
    public void muovi() {
        System.out.println("Il veicolo si sta muovendo");
    }
}

class Auto extends Veicolo {
    @Override
    public void muovi() {
        System.out.println("L'auto si sta muovendo");
    }

    public void muovi(int velocita) {
        System.out.println("L'auto si sta muovendo a " + velocita + " km/h");
    }

    public void muovi(int velocita, String direzione) {
        System.out.println("L'auto si sta muovendo a " + velocita + " km/h verso " + direzione);
    }
}

public class TestOverrideOverload {
    public static void main(String[] args) {
        Auto miaAuto = new Auto();
        miaAuto.muovi();
        miaAuto.muovi(60);
        miaAuto.muovi(80, "nord");
    }
}