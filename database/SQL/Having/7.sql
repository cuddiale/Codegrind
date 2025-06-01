-- Ottieni il numero di dipendenti per ciascun livello di esperienza, ma includi solo i livelli con almeno 5 dipendenti.

SELECT LivelloEsperienza, COUNT(*) AS NumeroDipendenti
FROM Dipendente
GROUP BY LivelloEsperienza
HAVING COUNT(*) >= 5;