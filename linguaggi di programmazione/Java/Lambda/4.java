// Verificare se un numero è positivo utilizzando un' espressione lambda:

public class NumeroPositivoLambda {
    public static void main(String[] args) {
        VerificatoreNumero verificatore = numero -> numero > 0;

        int numero = 7;

        boolean isPositivo = verificatore.verifica(numero);

        if (isPositivo) {
            System.out.println("Il numero è positivo.");
        } else {
            System.out.println("Il numero non è positivo.");
        }
    }

    interface VerificatoreNumero {
        boolean verifica(int numero);
    }
}