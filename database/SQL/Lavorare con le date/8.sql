-- Ottieni tutti i prodotti che scadono entro i prossimi 7 giorni.

SELECT *
FROM Prodotto
WHERE Data_Scadenza <= DATE_ADD(CURRENT_DATE, INTERVAL 7 DAY);