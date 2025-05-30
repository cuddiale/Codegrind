-- Ottieni tutte le combinazioni possibili tra i film e i generi.

SELECT Film.Titolo, Genere.Nome
FROM Film
CROSS JOIN Genere;