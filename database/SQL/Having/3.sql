-- Ottieni il numero di prodotti forniti da ciascun fornitore, ma includi solo i fornitori con almeno 10 prodotti.

SELECT ID_Fornitore, COUNT(*) AS NumeroProdotti
FROM Prodotto
GROUP BY ID_Fornitore
HAVING COUNT(*) >= 10;