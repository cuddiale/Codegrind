-- Ottieni tutti i clienti con un indirizzo email che contiene "gmail.com".

SELECT *
FROM Cliente
WHERE Email LIKE '%gmail.com%';
