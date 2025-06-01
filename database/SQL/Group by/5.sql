-- Ottieni il numero di studenti iscritti a ciascun corso.

SELECT ID_Corso, COUNT(*) AS NumeroStudenti
FROM Iscrizione
GROUP BY ID_Corso;
