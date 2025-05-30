-- Ottieni il nome dei dipendenti, il nome dei manager che li supervisionano e il nome dei dipartimenti a cui appartengono.

SELECT d.Nome, m.Nome, e.Nome
FROM Dipendente AS d
JOIN Dipendente AS m
    ON d.ID_Manager = m.ID
JOIN Dipartimento AS e
    ON d.ID_Dipartimento = e.ID;