-- Ottieni il nome degli autori che hanno scritto libri appartenenti a un determinato genere.

SELECT Nome
FROM Autore
WHERE ID IN (
    SELECT ID_Autore
    FROM Libro
    WHERE ID_Genere = (
        SELECT ID
        FROM Genere
        WHERE Nome = 'Romanzo'
    )
);