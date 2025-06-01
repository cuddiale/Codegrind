-- Ottieni tutti i clienti che hanno effettuato un ordine negli ultimi 30 giorni.

SELECT c.*
FROM Cliente c
JOIN Ordine o ON c.ID_Cliente = o.ID_Cliente
WHERE o.Data_Ordine >= DATE_SUB(CURRENT_DATE, INTERVAL 30 DAY);