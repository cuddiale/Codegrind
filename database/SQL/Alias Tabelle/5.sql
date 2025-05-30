-- Ottieni il titolo dei libri e il nome degli autori utilizzando gli alias "l" per la tabella "Libro" e "a" per la tabella "Autore".

SELECT l.Titolo, a.Nome
FROM Libro AS l
JOIN Autore AS a ON l.ID_Autore = a.ID;