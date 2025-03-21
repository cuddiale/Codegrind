// Definire un enumeratore per i giorni della settimana:

enum GiorniSettimana {
    LUNEDI, MARTEDI, MERCOLEDI, GIOVEDI, VENERDI, SABATO, DOMENICA
}

public static void main(String[] args) {
    GiorniSettimana giorno = GiorniSettimana.LUNEDI;

    System.out.println("Giorno selezionato: " + giorno);
}