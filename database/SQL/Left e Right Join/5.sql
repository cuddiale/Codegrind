-- Ottieni tutti i libri e gli autori corrispondenti, inclusi i libri senza autore.

SELECT Libro.Titolo, Autore.Nome
FROM Libro
LEFT JOIN Autore ON Libro.ID_Autore = Autore.ID;