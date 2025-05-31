-- Ottieni il nome degli impiegati che hanno almeno un dipendente sotto la loro supervisione.

SELECT Nome
FROM Impiegato
WHERE ID IN (
    SELECT ID_Manager
    FROM Dipendente
);
