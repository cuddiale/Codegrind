-- Ottieni la somma del prezzo dei prodotti forniti da ciascun fornitore.

SELECT ID_Fornitore, SUM(Prezzo) AS SommaPrezzo
FROM Prodotto
GROUP BY ID_Fornitore;