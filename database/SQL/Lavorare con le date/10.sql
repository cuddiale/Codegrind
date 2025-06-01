-- Ottieni tutti i film che sono stati rilasciati negli ultimi 3 anni e hanno una valutazione superiore a 4.

SELECT *
FROM Film
WHERE YEAR(Data_Uscita) >= YEAR(CURRENT_DATE) - 3
  AND Valutazione > 4;