-- Ottieni il nome dei clienti e il nome dei prodotti che hanno acquistato utilizzando gli alias "c" per la tabella "Cliente", "o" per la tabella "Ordine", "d" per la tabella "DettaglioOrdine" e "p" per la tabella "Prodotto".

SELECT c.Nome, p.Nome
FROM Cliente AS c
JOIN Ordine AS o ON c.ID = o.ID_Cliente
JOIN DettaglioOrdine AS d ON o.ID = d.ID_Ordine
JOIN Prodotto AS p ON d.ID_Prodotto = p.ID;