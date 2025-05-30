-- Ottieni il nome dei dipendenti e il nome dei loro manager utilizzando gli alias "d1" e "d2" per la tabella "Dipendente".

SELECT d1.Nome, d2.Nome AS Manager
FROM Dipendente AS d1
JOIN Dipendente AS d2 ON d1.ID_Manager = d2.ID;