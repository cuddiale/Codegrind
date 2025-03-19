// Creare un'interfaccia Confrontabile con un metodo compare che definisce il confronto tra due oggetti:

public interface Confrontabile {
    int compare(Object o1, Object o2);
}

public class Numero implements Confrontabile {
    public int compare(Object o1, Object o2) {
        int num1 = (int) o1;
        int num2 = (int) o2;

        if (num1 < num2) {
            return -1;
        } else if (num1 > num2) {
            return 1;
        } else {
            return 0;
        }
    }

    public static void main(String[] args) {
        Numero numero = new Numero();
        int confronto = numero.compare(5, 10);
        System.out.println("Confronto: " + confronto);
    }
}