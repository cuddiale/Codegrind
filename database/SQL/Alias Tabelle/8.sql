-- Ottieni il nome degli autori e il titolo dei libri utilizzando gli alias "a" per la tabella "Autore" e "l" per la tabella "Libro".

SELECT a.Nome, l.Titolo
FROM Autore AS a
JOIN Libro AS l ON a.ID = l.ID_Autore;