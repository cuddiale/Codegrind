// Creare una classe statica interna e accedervi dalla classe esterna.

public class ClasseEsterna {
    static class ClasseInterna {
        public void stampaMessaggio() {
            System.out.println("Classe interna statica.");
        }
    }

    public static void main(String[] args) {
        ClasseEsterna.ClasseInterna interna = new ClasseEsterna.ClasseInterna();
        interna.stampaMessaggio();
    }
}