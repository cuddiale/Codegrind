// Formattare una data utilizzando `String.format` e `SimpleDateFormat`.

import java.text.SimpleDateFormat;
import java.util.Date;

public class FormattazioneEsempio3 {
    public static void main(String[] args) {
        Date data = new Date();
        SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");
        String dataFormattata = String.format("Data: %s", sdf.format(data));
        System.out.println(dataFormattata);
    }
}