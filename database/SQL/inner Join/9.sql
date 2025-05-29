-- Ottieni il nome del dipendente e il nome del manager corrispondente.

SELECT Dipendente.Nome, Manager.Nome
FROM Dipendente
INNER JOIN Manager ON Dipendente.ID_Manager = Manager.ID;
