-- Ottieni tutti i film che hanno una parola di quattro lettere nel titolo.

SELECT *
FROM Film
WHERE Titolo LIKE '%____%';
