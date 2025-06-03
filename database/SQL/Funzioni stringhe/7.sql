-- Ottieni il numero di caratteri distinti presenti nella descrizione di ogni prodotto.

SELECT LENGTH(REPLACE(Descrizione, ' ', '')) AS NumeroCaratteri
FROM Prodotto;