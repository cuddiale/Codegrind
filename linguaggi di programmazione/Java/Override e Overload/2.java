// Creare una classe `Gatto` che sovrascrive il metodo `suono` della classe `Animale` e chiama il metodo sovrascritto della superclasse.

class Animale {
    public void suono() {
        System.out.println("L'animale fa un suono");
    }
}

class Gatto extends Animale {
    @Override
    public void suono() {
        super.suono();
        System.out.println("Il gatto miagola");
    }
}

public class TestOverride {
    public static void main(String[] args) {
        Animale mioGatto = new Gatto();
        mioGatto.suono();
    }
}