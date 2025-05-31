-- Ottieni la media della durata dei film per ciascun genere.

SELECT ID_Genere, AVG(Durata) AS DurataMedia
FROM Film
GROUP BY ID_Genere;