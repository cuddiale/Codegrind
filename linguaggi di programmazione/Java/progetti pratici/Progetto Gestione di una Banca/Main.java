import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Banca banca = new Banca();
        Scanner scanner = new Scanner(System.in);

        while (true) {
            System.out.println("1. Crea un nuovo conto");
            System.out.println("2. Effettua un deposito");
            System.out.println("3. Effettua un prelievo");
            System.out.println("4. Visualizza saldo");
            System.out.println("5. Esci");

            int scelta = scanner.nextInt();
            scanner.nextLine(); // Consuma il newline

            switch (scelta) {
                case 1:
                    System.out.print("Inserisci il nome del proprietario: ");
                    String proprietario = scanner.nextLine();
                    banca.creaConto(proprietario);
                    break;
                case 2:
                    System.out.print("Inserisci il numero del conto: ");
                    int numeroContoDeposito = scanner.nextInt();
                    System.out.print("Inserisci l'importo del deposito: ");
                    double importoDeposito = scanner.nextDouble();
                    banca.effettuaDeposito(numeroContoDeposito, importoDeposito);
                    break;
                case 3:
                    System.out.print("Inserisci il numero del conto: ");
                    int numeroContoPrelievo = scanner.nextInt();
                    System.out.print("Inserisci l'importo del prelievo: ");
                    double importoPrelievo = scanner.nextDouble();
                    banca.effettuaPrelievo(numeroContoPrelievo, importoPrelievo);
                    break;
                case 4:
                    System.out.print("Inserisci il numero del conto: ");
                    int numeroContoSaldo = scanner.nextInt();
                    banca.visualizzaSaldo(numeroContoSaldo);
                    break;
                case 5:
                    System.out.println("Uscita in corso...");
                    scanner.close();
                    return;
                default:
                    System.out.println("Scelta non valida.");
            }
        }
    }
}