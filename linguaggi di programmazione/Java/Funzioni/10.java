// Calcolare il valore assoluto di un numero utilizzando una funzione:

public class ValoreAssoluto {
    public static void main(String[] args) {
        int numero = -5;

        int valoreAssoluto = calcolaValoreAssoluto(numero);

        System.out.println("Il valore assoluto di " + numero + " è: " + valoreAssoluto);
    }

    public static int calcolaValoreAssoluto(int numero) {
        if (numero < 0) {
            return -numero;
        } else {
            return numero;
        }
    }
}
