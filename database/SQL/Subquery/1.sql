-- Ottieni il nome degli studenti che sono iscritti a corsi con una durata superiore alla media di tutte le durate dei corsi.

SELECT Nome
FROM Studente
WHERE ID IN (
    SELECT ID_Studente
    FROM Iscrizione
    WHERE ID_Corso IN (
        SELECT ID
        FROM Corso
        WHERE Durata > (
            SELECT AVG(Durata)
            FROM Corso
        )
    )
);