-- Ottieni il nome del fornitore e il nome del prodotto che fornisce.

SELECT Fornitore.Nome, Prodotto.Nome
FROM Fornitore
INNER JOIN Prodotto ON Fornitore.ID = Prodotto.ID_Fornitore;