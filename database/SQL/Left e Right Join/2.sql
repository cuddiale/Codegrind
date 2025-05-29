-- Ottieni tutti i prodotti e i relativi fornitori, inclusi i prodotti senza fornitori.

SELECT Prodotto.Nome, Fornitore.Nome
FROM Prodotto
LEFT JOIN Fornitore ON Prodotto.ID_Fornitore = Fornitore.ID;