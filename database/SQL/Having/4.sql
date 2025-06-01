-- Ottieni il numero di corsi per ciascun dipartimento, ma includi solo i dipartimenti con almeno 2 corsi.

SELECT ID_Dipartimento, COUNT(*) AS NumeroCorsi
FROM Corso
GROUP BY ID_Dipartimento
HAVING COUNT(*) >= 2;
