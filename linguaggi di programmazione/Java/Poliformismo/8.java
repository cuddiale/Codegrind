// Creare una classe Personaggio con un metodo eseguiAzione che esegue un'azione generica del personaggio:

public class Personaggio {
    public void eseguiAzione() {
        System.out.println("Azione generica");
    }
}

public static void main(String[] args) {
    Personaggio personaggio = new Personaggio();
    personaggio.eseguiAzione();
}