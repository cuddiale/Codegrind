-- Ottieni tutti i film che sono stati rilasciati nel corrente anno e hanno una durata superiore a 120 minuti.

SELECT *
FROM Film
WHERE YEAR(Data_Uscita) = YEAR(CURRENT_DATE)
  AND Durata > 120;