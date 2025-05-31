-- Ottieni il nome degli studenti che hanno superato almeno un esame con una votazione superiore a 90.

SELECT Nome
FROM Studente
WHERE ID IN (
    SELECT ID_Studente
    FROM Esame
    WHERE Votazione > 90
);