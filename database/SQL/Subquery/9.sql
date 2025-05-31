-- Ottieni il nome degli attori che hanno recitato in tutti i film appartenenti a un determinato genere.

SELECT Nome
FROM Attore
WHERE ID IN (
    SELECT ID_Attore
    FROM Recitazione
    WHERE ID_Film IN (
        SELECT ID
        FROM Film
        WHERE ID_Genere = (
            SELECT ID
            FROM Genere
            WHERE Nome = 'Commedia'
        )
    )
    GROUP BY ID_Attore
    HAVING COUNT(DISTINCT ID_Film) = (
        SELECT COUNT(ID)
        FROM Film
        WHERE ID_Genere = (
            SELECT ID
            FROM Genere
            WHERE Nome = 'Commedia'
        )
    )
);