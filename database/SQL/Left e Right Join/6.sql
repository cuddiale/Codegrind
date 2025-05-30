-- Ottieni tutti i film e i rispettivi generi, inclusi i film senza genere.

SELECT Film.Titolo, Genere.Nome
FROM Film
LEFT JOIN Genere ON Film.ID_Genere = Genere.ID;