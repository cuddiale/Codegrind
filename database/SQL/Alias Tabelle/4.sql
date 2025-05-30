-- Ottieni il nome dei clienti e l'indirizzo di spedizione utilizzando l'alias "c" per la tabella "Cliente" e "s" per la tabella "Spedizione".

SELECT c.Nome, s.Indirizzo
FROM Cliente AS c
JOIN Spedizione AS s ON c.ID = s.ID_Cliente;