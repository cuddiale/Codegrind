-- Ottieni il numero di dipendenti che hanno uno stipendio superiore a 5000.

SELECT COUNT(*) AS NumeroDipendenti
FROM Dipendente
WHERE Stipendio > 5000;