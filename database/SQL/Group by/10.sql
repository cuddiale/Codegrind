-- Ottieni il numero di dipendenti per ciascun ruolo.

SELECT Ruolo, COUNT(*) AS NumeroDipendenti
FROM Dipendente
GROUP BY Ruolo;
