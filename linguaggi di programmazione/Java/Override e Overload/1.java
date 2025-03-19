// Creare una classe base `Animale` con un metodo `suono` e una classe derivata `Cane` che sovrascrive il metodo `suono`.

class Animale {
    public void suono() {
        System.out.println("L'animale fa un suono");
    }
}

class Cane extends Animale {
    @Override
    public void suono() {
        System.out.println("Il cane abbaia");
    }
}

public class TestOverride {
    public static void main(String[] args) {
        Animale mioAnimale = new Animale();
        Animale mioCane = new Cane();

        mioAnimale.suono();
        mioCane.suono();
    }
}