// Arrotondare un numero al valore più vicino utilizzando `Math.round`, `Math.ceil` e `Math.floor`.

public class Arrotondamento {
    public static void main(String[] args) {
        double numero = 5.7;
        long arrotondato = Math.round(numero);
        double arrotondatoSu = Math.ceil(numero);
        double arrotondatoGiu = Math.floor(numero);

        System.out.println("Numero originale: " + numero);
        System.out.println("Arrotondato: " + arrotondato);
        System.out.println("Arrotondato per eccesso: " + arrotondatoSu);
        System.out.println("Arrotondato per difetto: " + arrotondatoGiu);
    }
}