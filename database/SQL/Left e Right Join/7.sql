-- Ottieni tutti i clienti e i prodotti che hanno acquistato, inclusi i clienti senza ordini.

SELECT Cliente.Nome, Prodotto.Nome
FROM Cliente
LEFT JOIN Ordine ON Cliente.ID = Ordine.ID_Cliente
LEFT JOIN DettaglioOrdine ON Ordine.ID = DettaglioOrdine.ID_Ordine
LEFT JOIN Prodotto ON DettaglioOrdine.ID_Prodotto = Prodotto.ID;
