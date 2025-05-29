-- Seleziona il titolo, l'autore e l'anno di pubblicazione dei libri pubblicati dopo il 2000.

SELECT Titolo, Autore, AnnoPubblicazione
FROM Libro
WHERE AnnoPubblicazione > 2000;
