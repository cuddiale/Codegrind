// Creare una classe Guerriero che estende la classe Personaggio e sovrascrive il metodo eseguiAzione per eseguire un'azione specifica del guerriero:

public class Guerriero extends Personaggio {
    public void eseguiAzione() {
        System.out.println("Attacco con la spada!");
    }
}

public static void main(String[] args) {
    Personaggio guerriero = new Guerriero();
    guerriero.eseguiAzione();
}