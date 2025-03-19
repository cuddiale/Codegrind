// Creare un'interfaccia Suonabile con un metodo play che definisce la riproduzione di un suono:

public interface Suonabile {
    void play();
}

public class Pianoforte implements Suonabile {
    public void play() {
        System.out.println("Suona il pianoforte.");
    }

    public static void main(String[] args) {
        Pianoforte pianoforte = new Pianoforte();
        pianoforte.play();
    }
}