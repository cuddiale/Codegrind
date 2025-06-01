-- Ottieni tutti i clienti che hanno effettuato almeno un ordine nel mese di ottobre di qualsiasi anno.

SELECT c.*
FROM Cliente c
JOIN Ordine o ON c.ID_Cliente = o.ID_Cliente
WHERE MONTH(o.Data_Ordine) = 10;