// Creare un'interfaccia Eseguibile con un metodo execute che definisce l'esecuzione di un'azione:

public interface Eseguibile {
    void execute();
}

public class Comando implements Eseguibile {
    public void execute() {
        System.out.println("Esegue il comando.");
    }

    public static void main(String[] args) {
        Comando comando = new Comando();
        comando.execute();
    }
}