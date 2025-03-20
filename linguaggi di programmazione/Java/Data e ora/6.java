// Calcolare la differenza tra due ore:

import java.time.LocalTime;
import java.time.temporal.ChronoUnit;

LocalTime ora1 = LocalTime.of(10, 30, 0);
LocalTime ora2 = LocalTime.of(15, 45, 0);

long differenzaMinuti = ChronoUnit.MINUTES.between(ora1, ora2);

System.out.println("La differenza in minuti tra le due ore è: " + differenzaMinuti);
