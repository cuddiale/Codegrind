-- Ottieni tutte le combinazioni possibili tra i fornitori e i prodotti.

SELECT Fornitore.Nome, Prodotto.Nome
FROM Fornitore
CROSS JOIN Prodotto;
