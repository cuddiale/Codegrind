-- Ottieni tutti i fornitori e i prodotti che forniscono, inclusi i fornitori senza prodotti.

SELECT Fornitore.Nome, Prodotto.Nome
FROM Fornitore
RIGHT JOIN Prodotto ON Fornitore.ID = Prodotto.ID_Fornitore;