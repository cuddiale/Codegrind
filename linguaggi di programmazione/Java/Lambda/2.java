// Verificare se una parola è lunga più di un certo numero di caratteri utilizzando un' espressione lambda:

public class ParolaLungaLambda {
    public static void main(String[] args) {
        VerificatoreParola verificatore = (parola, lunghezza) -> parola.length() > lunghezza;

        String parola = "esercizio";
        int lunghezzaMinima = 5;

        boolean isLunga = verificatore.verifica(parola, lunghezzaMinima);

        if (isLunga) {
            System.out.println("La parola è lunga più di " + lunghezzaMinima + " caratteri.");
        } else {
            System.out.println("La parola non è lunga più di " + lunghezzaMinima + " caratteri.");
        }
    }

    interface VerificatoreParola {
        boolean verifica(String parola, int lunghezza);
    }
}