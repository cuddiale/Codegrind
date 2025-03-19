// Creare una classe Computer con un campo modello protetto e un metodo mostraModello pubblico per accedere al valore del campo:

public class Computer {
    protected String modello;

    public Computer(String modello) {
        this.modello = modello;
    }

    public void mostraModello() {
        System.out.println("Modello: " + modello);
    }
}

public static void main(String[] args) {
    Computer computer = new Computer("HP");
    computer.mostraModello();
}