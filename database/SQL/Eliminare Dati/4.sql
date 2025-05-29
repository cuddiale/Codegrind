-- Rimuovi tutti i clienti con un indirizzo vuoto o nullo dalla tabella Cliente.

DELETE FROM Cliente
WHERE Indirizzo IS NULL OR Indirizzo = '';
