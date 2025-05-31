-- Ottieni il nome dei dipartimenti che hanno almeno un dipendente con un salario superiore alla media dei salari di tutti i dipendenti.

SELECT Nome
FROM Dipartimento
WHERE ID IN (
    SELECT ID_Dipartimento
    FROM Dipendente
    WHERE Salario > (
        SELECT AVG(Salario)
        FROM Dipendente
    )
);