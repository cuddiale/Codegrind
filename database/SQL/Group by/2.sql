-- Ottieni il numero di dipendenti per ciascun dipartimento.

SELECT ID_Dipartimento, COUNT(*) AS NumeroDipendenti
FROM Dipendente
GROUP BY ID_Dipartimento;