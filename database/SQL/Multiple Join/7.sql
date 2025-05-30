-- Ottieni il nome degli attori, il nome dei film in cui hanno recitato e il nome dei registi di quei film.

SELECT a.Nome, f.Titolo, r.Nome
FROM Attore AS a
JOIN Recitazione AS r
    ON a.ID = r.ID_Attore
JOIN Film AS f
    ON r.ID_Film = f.ID
JOIN Regista AS rg
    ON f.ID_Regista = rg.ID;
