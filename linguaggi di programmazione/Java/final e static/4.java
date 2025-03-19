// Creare una classe con un metodo `final` e tentare di sovrascriverlo in una classe derivata.

class ClasseBase {
    public final void metodoFinal() {
        System.out.println("Metodo final della classe base.");
    }
}

class ClasseDerivata extends ClasseBase {
    // Prova a sovrascrivere il metodo final
    // @Override
    // public void metodoFinal() { // Questo causerà un errore di compilazione
    //     System.out.println("Metodo final della classe derivata.");
    // }
}

public class MetodoFinal {
    public static void main(String[] args) {
        ClasseDerivata cd = new ClasseDerivata();
        cd.metodoFinal();
    }
}