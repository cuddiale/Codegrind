-- Ottieni il numero di prodotti forniti da ciascun fornitore.

SELECT ID_Fornitore, COUNT(*) AS NumeroProdotti
FROM Prodotto
GROUP BY ID_Fornitore;