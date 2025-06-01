-- Ottieni il numero di film per ciascun genere.

SELECT ID_Genere, COUNT(*) AS NumeroFilm
FROM Film
GROUP BY ID_Genere;