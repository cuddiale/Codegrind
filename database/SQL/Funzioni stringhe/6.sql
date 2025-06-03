-- Ottieni l'ultima parola del titolo per tutti i film.

SELECT SUBSTRING_INDEX(Titolo, ' ', -1) AS UltimaParola
FROM Film;