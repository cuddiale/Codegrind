-- Ottieni il numero di prodotti venduti per ciascun ordine, ma includi solo gli ordini con almeno 5 prodotti.

SELECT ID_Ordine, COUNT(*) AS NumeroProdotti
FROM DettaglioOrdine
GROUP BY ID_Ordine
HAVING COUNT(*) >= 5;