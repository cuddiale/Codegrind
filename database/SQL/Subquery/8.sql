-- Ottieni il nome dei clienti che hanno effettuato un ordine con un importo totale superiore a 1000.

SELECT Nome
FROM Cliente
WHERE ID IN (
    SELECT ID_Cliente
    FROM Ordine
    GROUP BY ID_Cliente
    HAVING SUM(Importo) > 1000
);