-- Ottieni il nome dell'autore e il titolo del libro corrispondente.

SELECT Autore.Nome, Libro.Titolo
FROM Autore
INNER JOIN Libro ON Autore.ID = Libro.ID_Autore;
