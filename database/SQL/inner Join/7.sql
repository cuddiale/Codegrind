-- Ottieni il nome del cliente e il nome del prodotto che ha acquistato.

SELECT Cliente.Nome, Prodotto.Nome
FROM Cliente
INNER JOIN Ordine ON Cliente.ID = Ordine.ID_Cliente
INNER JOIN DettaglioOrdine ON Ordine.ID = DettaglioOrdine.ID_Ordine
INNER JOIN Prodotto ON DettaglioOrdine.ID_Prodotto = Prodotto.ID;
