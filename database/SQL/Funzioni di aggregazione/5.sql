-- Ottieni il valore massimo della quantità di prodotti venduti per ciascun cliente.

SELECT ID_Cliente, MAX(Quantita) AS MaxQuantita
FROM DettaglioOrdine
GROUP BY ID_Cliente;
