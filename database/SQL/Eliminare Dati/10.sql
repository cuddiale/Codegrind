-- Rimuovi tutti i record duplicati dalla tabella Ordine in base al numero di ordine.

DELETE FROM Ordine
WHERE ID NOT IN (
    SELECT MIN(ID)
    FROM Ordine
    GROUP BY NumeroOrdine
);