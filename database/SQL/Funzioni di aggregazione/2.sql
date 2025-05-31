-- Ottieni il numero di dipendenti presenti in ciascun dipartimento.

SELECT ID_Dipartimento, COUNT(*) AS NumeroDipendenti
FROM Dipendente
GROUP BY ID_Dipartimento;
