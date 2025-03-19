// Creare una classe anonima che implementa un'interfaccia e sovrascrivere il metodo dell'interfaccia.

interface Saluto {
    void saluta();
}

public class ClasseAnonima {
    public void metodoClasseAnonima() {
        Saluto saluto = new Saluto() {
            @Override
            public void saluta() {
                System.out.println("Ciao dalla classe anonima!");
            }
        };
        saluto.saluta();
    }

    public static void main(String[] args) {
        ClasseAnonima ca = new ClasseAnonima();
        ca.metodoClasseAnonima();
    }
}