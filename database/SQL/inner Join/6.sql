-- Ottieni il titolo del film e il genere corrispondente.

SELECT Film.Titolo, Genere.Nome
FROM Film
INNER JOIN Genere ON Film.ID_Genere = Genere.ID;