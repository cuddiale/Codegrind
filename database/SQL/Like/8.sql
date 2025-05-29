-- Ottieni tutti i clienti con un nome che contiene la lettera "a" seguita da due lettere qualsiasi.

SELECT *
FROM Cliente
WHERE Nome LIKE '%a__%';
