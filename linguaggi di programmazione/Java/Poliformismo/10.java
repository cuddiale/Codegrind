// Creare una classe Mago che estende la classe Personaggio e sovrascrive il metodo eseguiAzione per eseguire un'azione specifica del mago:

public class Mago extends Personaggio {
    public void eseguiAzione() {
        System.out.println("Lancio un incantesimo!");
    }
}

public static void main(String[] args) {
    Personaggio mago = new Mago();
    mago.eseguiAzione();
}