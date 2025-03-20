// Aggiungere o sottrarre giorni da una data:

import java.time.LocalDate;

LocalDate data = LocalDate.of(2022, 7, 20);

LocalDate dataModificata = data.plusDays(10); // Aggiunge 10 giorni

System.out.println("La data modificata è: " + dataModificata);