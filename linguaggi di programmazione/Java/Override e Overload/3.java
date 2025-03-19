// Sovrascrivere un metodo della classe `Animale` nella classe `Uccello` aumentando la visibilità del metodo.

class Animale {
    void suono() {
        System.out.println("L'animale fa un suono");
    }
}

class Uccello extends Animale {
    @Override
    public void suono() {
        System.out.println("L'uccello cinguetta");
    }
}

public class TestOverride {
    public static void main(String[] args) {
        Animale mioUccello = new Uccello();
        mioUccello.suono();
    }
}