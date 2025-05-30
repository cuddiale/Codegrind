-- Ottieni tutti i clienti e gli indirizzi di spedizione corrispondenti, inclusi i clienti senza indirizzo di spedizione.

SELECT Cliente.Nome, Spedizione.Indirizzo
FROM Cliente
LEFT JOIN Spedizione ON Cliente.ID = Spedizione.ID_Cliente;