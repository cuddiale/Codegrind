-- Ottieni tutti i prodotti che iniziano con la lettera "P" nella descrizione.

SELECT *
FROM Prodotto
WHERE Descrizione LIKE 'P%';
