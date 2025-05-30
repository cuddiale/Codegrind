-- Ottieni tutti gli autori e i rispettivi libri, inclusi gli autori senza libri.

SELECT Autore.Nome, Libro.Titolo
FROM Autore
LEFT JOIN Libro ON Autore.ID = Libro.ID_Autore;
