-- Ottieni tutti i prodotti scaduti al giorno corrente.

SELECT *
FROM Prodotto
WHERE Data_Scadenza <= CURRENT_DATE;