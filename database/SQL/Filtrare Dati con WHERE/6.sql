-- Seleziona il nome, il prezzo e la quantità dei prodotti con prezzo inferiore a 50 e quantità disponibile maggiore di 10.

SELECT Nome, Prezzo, Quantità
FROM Prodotto
WHERE Prezzo < 50 AND Quantità > 10;