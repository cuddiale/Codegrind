-- Ottieni l'indirizzo email dei clienti senza il dominio.

SELECT SUBSTRING_INDEX(Email, '@', 1) AS NomeUtente
FROM Cliente;