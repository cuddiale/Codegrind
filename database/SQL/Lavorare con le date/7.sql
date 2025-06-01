-- Ottieni tutti i dipendenti che sono stati assunti prima del 1° gennaio 2022.

SELECT *
FROM Dipendente
WHERE Data_Assunzione < '2022-01-01';