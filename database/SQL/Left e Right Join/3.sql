-- Ottieni tutti gli impiegati e i rispettivi dipartimenti in cui lavorano, inclusi gli impiegati senza dipartimento.

SELECT Impiegato.Nome, Dipartimento.Nome
FROM Impiegato
LEFT JOIN Dipartimento ON Impiegato.ID_Dipartimento = Dipartimento.ID;
