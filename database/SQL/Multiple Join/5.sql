-- Ottieni il nome dei clienti, il nome dei prodotti che hanno acquistato e la quantità di ciascun prodotto.

SELECT c.Nome, p.Nome, d.Quantita
FROM Cliente AS c
JOIN Ordine AS o
    ON c.ID = o.ID_Cliente
JOIN DettaglioOrdine AS d
    ON o.ID = d.ID_Ordine
JOIN Prodotto AS p
    ON d.ID_Prodotto = p.ID;
