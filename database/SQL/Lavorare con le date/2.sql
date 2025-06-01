-- Ottieni tutti gli ordini effettuati nel mese corrente.

SELECT *
FROM Ordine
WHERE MONTH(Data_Ordine) = MONTH(CURRENT_DATE);