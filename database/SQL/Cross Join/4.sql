-- Ottieni tutte le combinazioni possibili tra i clienti e gli indirizzi di spedizione.

SELECT Cliente.Nome, Spedizione.Indirizzo
FROM Cliente
CROSS JOIN Spedizione;