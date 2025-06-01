-- Ottieni il numero di ordini effettuati da ciascun cliente.

SELECT ID_Cliente, COUNT(*) AS NumeroOrdini
FROM Ordine
GROUP BY ID_Cliente;