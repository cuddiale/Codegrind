-- Ottieni il nome degli impiegati, il nome dei dipartimenti in cui lavorano e il nome dei manager che supervisionano quei dipartimenti.

SELECT e.Nome, d.Nome, m.Nome
FROM Impiegato AS e
JOIN Dipendente AS d
    ON e.ID_Dipendente = d.ID
JOIN Dipendente AS m
    ON d.ID_Manager = m.ID;
