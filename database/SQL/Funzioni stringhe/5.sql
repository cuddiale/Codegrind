-- Ottieni i primi tre caratteri del codice prodotto per tutti i prodotti.

SELECT LEFT(CodiceProdotto, 3) AS PrimiTreCaratteri
FROM Prodotto;