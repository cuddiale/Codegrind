// Aggiungere o sottrarre ore da un'ora specifica:

import java.time.LocalTime;

LocalTime ora = LocalTime.of(13, 30, 0);

LocalTime oraModificata = ora.minusHours(2); // Sottrae 2 ore

System.out.println("L'ora modificata è: " + oraModificata);