-- Ottieni tutte le combinazioni possibili tra i prodotti e i fornitori.

SELECT Prodotto.Nome, Fornitore.Nome
FROM Prodotto
CROSS JOIN Fornitore;