-- Ottieni il numero di film per ciascun genere, ma includi solo i generi con almeno 5 film.

SELECT ID_Genere, COUNT(*) AS NumeroFilm
FROM Film
GROUP BY ID_Genere
HAVING COUNT(*) >= 5;