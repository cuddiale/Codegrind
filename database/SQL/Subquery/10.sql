-- Ottieni il nome dei dipendenti che sono stati assunti prima di un certo dipendente con un determinato ID.

SELECT Nome
FROM Dipendente
WHERE DataAssunzione < (
    SELECT DataAssunzione
    FROM Dipendente
    WHERE ID = 5
);