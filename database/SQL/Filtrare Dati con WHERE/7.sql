-- Seleziona il nome, il cognome e l'indirizzo dei clienti con nome 'Marco' o 'Giulia'.

SELECT Nome, Cognome, Indirizzo
FROM Cliente
WHERE Nome IN ('Marco', 'Giulia');