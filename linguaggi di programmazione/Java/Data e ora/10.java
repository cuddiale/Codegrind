// Formattare un'ora in una stringa:

import java.time.LocalTime;
import java.time.format.DateTimeFormatter;

LocalTime ora = LocalTime.of(18, 15, 30);

DateTimeFormatter formatter = DateTimeFormatter.ofPattern("HH:mm:ss");
String oraFormattata = ora.format(formatter);

System.out.println("L'ora formattata è: " + oraFormattata);