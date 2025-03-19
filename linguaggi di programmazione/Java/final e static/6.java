// Creare una classe `final` e tentare di ereditarla.

public final class ClasseFinal {
    public void stampaMessaggio() {
        System.out.println("Classe final.");
    }
}

// Prova a ereditare la classe final
// class ClasseDerivata extends ClasseFinal { // Questo causerà un errore di compilazione
// }

public class TestClasseFinal {
    public static void main(String[] args) {
        ClasseFinal cf = new ClasseFinal();
        cf.stampaMessaggio();
    }
}