// Calcolare la differenza tra due date:

import java.time.LocalDate;
import java.time.temporal.ChronoUnit;

LocalDate data1 = LocalDate.of(2022, 5, 15);
LocalDate data2 = LocalDate.of(2022, 6, 10);

long differenzaGiorni = ChronoUnit.DAYS.between(data1, data2);

System.out.println("La differenza in giorni tra le due date è: " + differenzaGiorni);
