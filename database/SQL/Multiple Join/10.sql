-- Ottieni il nome degli autori, il nome dei libri che hanno scritto e il nome dei generi a cui appartengono quei libri, solo per gli autori che hanno scritto più di un libro.

SELECT a.Nome, l.Titolo, g.Nome
FROM Autore AS a
JOIN Libro AS l
    ON a.ID = l.ID_Autore
JOIN Genere AS g
    ON l.ID_Genere = g.ID
WHERE a.ID IN (
    SELECT ID_Autore
    FROM Libro
    GROUP BY ID_Autore
    HAVING COUNT(*) > 1
);
