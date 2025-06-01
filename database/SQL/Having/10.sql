-- Ottieni il numero di dipendenti per ciascun ruolo, ma includi solo i ruoli con almeno 3 dipendenti.

SELECT Ruolo, COUNT(*) AS NumeroDipendenti
FROM Dipendente
GROUP BY Ruolo
HAVING COUNT(*) >= 3;