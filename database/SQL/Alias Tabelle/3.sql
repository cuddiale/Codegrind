-- Ottieni il nome degli impiegati e il nome dei dipartimenti in cui lavorano utilizzando gli alias "i" per la tabella "Impiegato" e "d" per la tabella

SELECT i.Nome, d.Nome
FROM Impiegato AS i
JOIN Dipartimento AS d ON i.ID_Dipartimento = d.ID;