// Formattare una data in una stringa:

import java.time.LocalDate;
import java.time.format.DateTimeFormatter;

LocalDate data = LocalDate.of(2022, 9, 25);

DateTimeFormatter formatter = DateTimeFormatter.ofPattern("dd/MM/yyyy");
String dataFormattata = data.format(formatter);

System.out.println("La data formattata è: " + dataFormattata);