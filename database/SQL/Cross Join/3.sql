-- Ottieni tutte le combinazioni possibili tra gli impiegati e i dipartimenti.

SELECT Impiegato.Nome, Dipartimento.Nome
FROM Impiegato
CROSS JOIN Dipartimento;