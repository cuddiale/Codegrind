-- Rimuovi tutti gli autori con un nome nullo dalla tabella Autore.

DELETE FROM Autore
WHERE Nome IS NULL;