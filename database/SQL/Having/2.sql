-- Ottieni il numero di dipendenti per ciascun dipartimento, ma includi solo i dipartimenti con almeno 3 dipendenti.

SELECT ID_Dipartimento, COUNT(*) AS NumeroDipendenti
FROM Dipendente
GROUP BY ID_Dipartimento
HAVING COUNT(*) >= 3;