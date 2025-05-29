-- Ottieni tutti i prodotti che hanno una descrizione contenente la parola "biologico".

SELECT *
FROM Prodotto
WHERE Descrizione LIKE '%biologico%';
