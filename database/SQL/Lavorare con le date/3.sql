-- Ottieni tutti i dipendenti assunti negli ultimi 6 mesi.

SELECT *
FROM Dipendente
WHERE Data_Assunzione >= DATE_SUB(CURRENT_DATE, INTERVAL 6 MONTH);