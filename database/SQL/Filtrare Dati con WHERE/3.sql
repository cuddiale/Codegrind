-- Seleziona il nome, l'indirizzo e il numero di telefono dei clienti con indirizzo iniziante con 'Via'.

SELECT Nome, Indirizzo, NumeroTelefono
FROM Cliente
WHERE Indirizzo LIKE 'Via%';