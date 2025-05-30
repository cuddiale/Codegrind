-- Ottieni il nome dei prodotti che sono forniti da tutti i fornitori.

SELECT Nome
FROM Prodotto
WHERE ID_Fornitore IN (
    SELECT ID
    FROM Fornitore
    WHERE ID_Dipartimento IN (
        SELECT ID
        FROM Dipartimento
        WHERE (SELECT COUNT(DISTINCT ID_Fornitore) FROM Prodotto) = (
            SELECT COUNT(*)
            FROM Fornitore
            WHERE ID_Dipartimento = Dipartimento.ID
        )
    )
);