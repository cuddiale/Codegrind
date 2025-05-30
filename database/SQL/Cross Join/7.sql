-- Ottieni tutte le combinazioni possibili tra i clienti e i prodotti.

SELECT Cliente.Nome, Prodotto.Nome
FROM Cliente
CROSS JOIN Prodotto;