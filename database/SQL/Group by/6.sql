-- Ottieni il numero di libri scritti da ciascun autore.

SELECT ID_Autore, COUNT(*) AS NumeroLibri
FROM Libro
GROUP BY ID_Autore;