-- Ottieni tutti i prodotti che hanno una descrizione che inizia con "Bio" e termina con "alimentare".

SELECT *
FROM Prodotto
WHERE Descrizione LIKE 'Bio%alimentare';
