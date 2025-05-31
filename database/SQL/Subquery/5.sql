-- Ottieni il nome dei prodotti che sono stati acquistati da clienti con un indirizzo email che termina con "@gmail.com".

SELECT Nome
FROM Prodotto
WHERE ID IN (
    SELECT ID_Prodotto
    FROM DettaglioOrdine
    WHERE ID_Ordine IN (
        SELECT ID
        FROM Ordine
        WHERE ID_Cliente IN (
            SELECT ID
            FROM Cliente
            WHERE Email LIKE '%@gmail.com'
        )
    )
);