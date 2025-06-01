-- Ottieni il numero di libri scritti da ciascun autore, ma includi solo gli autori con almeno 3 libri.

SELECT ID_Autore, COUNT(*) AS NumeroLibri
FROM Libro
GROUP BY ID_Autore
HAVING COUNT(*) >= 3;