-- Ottieni il nome degli autori, il nome dei libri che hanno scritto e il nome dei generi a cui appartengono quei libri.

SELECT a.Nome, l.Titolo, g.Nome
FROM Autore AS a
JOIN Libro AS l
    ON a.ID = l.ID_Autore
JOIN Genere AS g
    ON l.ID_Genere = g.ID;

