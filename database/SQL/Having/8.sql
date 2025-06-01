-- Ottieni il numero di ordini effettuati da ciascun cliente, ma includi solo i clienti con almeno 2 ordini.

SELECT ID_Cliente, COUNT(*) AS NumeroOrdini
FROM Ordine
GROUP BY ID_Cliente
HAVING COUNT(*) >= 2;