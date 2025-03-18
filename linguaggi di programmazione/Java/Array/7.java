// Verificare se un array contiene un elemento specifico:

public class ContieneElementoArray {
    public static void main(String[] args) {
        int[] numeri = {5, 10, 15, 20, 25};
        int elementoDaCercare = 15;
        boolean contieneElemento = false;
        for (int numero : numeri) {
            if (numero == elementoDaCercare) {
                contieneElemento = true;
                break;
            }
        }
        System.out.println("L'array contiene l'elemento " + elementoDaCercare + ": " + contieneElemento);
    }
}