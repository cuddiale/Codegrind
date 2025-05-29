-- Ottieni il titolo del libro e il nome dell'autore corrispondente.

SELECT Libro.Titolo, Autore.Nome
FROM Libro
INNER JOIN Autore ON Libro.ID_Autore = Autore.ID;