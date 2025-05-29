-- Ottieni il nome del cliente e l'indirizzo di spedizione corrispondente.

SELECT Cliente.Nome, Spedizione.Indirizzo
FROM Cliente
INNER JOIN Spedizione ON Cliente.ID = Spedizione.ID_Cliente;
