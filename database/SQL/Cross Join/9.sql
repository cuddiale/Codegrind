-- Ottieni tutte le combinazioni possibili tra i dipendenti e i manager.

SELECT Dipendente.Nome, Manager.Nome
FROM Dipendente
CROSS JOIN Manager;
