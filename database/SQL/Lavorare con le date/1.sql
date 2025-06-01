-- Ottieni tutti i film usciti nel corrente anno.

SELECT *
FROM Film
WHERE YEAR(Data_Uscita) = YEAR(CURRENT_DATE);