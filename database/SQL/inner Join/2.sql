-- Ottieni il nome del prodotto e il nome del fornitore corrispondente.

SELECT Prodotto.Nome, Fornitore.Nome
FROM Prodotto
INNER JOIN Fornitore ON Prodotto.ID_Fornitore = Fornitore.ID;