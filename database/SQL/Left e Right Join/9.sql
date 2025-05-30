-- Ottieni tutti i dipendenti e i rispettivi manager, inclusi i dipendenti senza manager.

SELECT Dipendente.Nome, Manager.Nome
FROM Dipendente
LEFT JOIN Manager ON Dipendente.ID_Manager = Manager.ID;