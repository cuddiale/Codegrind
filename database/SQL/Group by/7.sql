-- Ottieni il numero di dipendenti per ciascun livello di esperienza.

SELECT LivelloEsperienza, COUNT(*) AS NumeroDipendenti
FROM Dipendente
GROUP BY LivelloEsperienza;