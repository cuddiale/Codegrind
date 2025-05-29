-- Rimuovi tutti i libri pubblicati prima del 2010 dalla tabella Libro.

DELETE FROM Libro
WHERE AnnoPubblicazione < 2010;