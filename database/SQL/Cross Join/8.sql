-- Ottieni tutte le combinazioni possibili tra gli autori e i libri.

SELECT Autore.Nome, Libro.Titolo
FROM Autore
CROSS JOIN Libro;
