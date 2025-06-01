-- Ottieni il numero di corsi per ciascun dipartimento.

SELECT ID_Dipartimento, COUNT(*) AS NumeroCorsi
FROM Corso
GROUP BY ID_Dipartimento;
