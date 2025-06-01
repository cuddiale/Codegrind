-- Ottieni il numero di studenti iscritti a ciascun corso, ma includi solo i corsi con almeno 20 studenti.

SELECT ID_Corso, COUNT(*) AS NumeroStudenti
FROM Iscrizione
GROUP BY ID_Corso
HAVING COUNT(*) >= 20;