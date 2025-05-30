-- Ottieni tutte le combinazioni possibili tra i libri e gli autori.

SELECT Libro.Titolo, Autore.Nome
FROM Libro
CROSS JOIN Autore;