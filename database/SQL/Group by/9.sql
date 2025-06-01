-- Ottieni il numero di prodotti venduti per ciascun ordine.

SELECT ID_Ordine, COUNT(*) AS NumeroProdotti
FROM DettaglioOrdine
GROUP BY ID_Ordine;