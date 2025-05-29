-- Aggiorna l'indirizzo e il numero di telefono del cliente con ID 4.

UPDATE Cliente
SET Indirizzo = 'Via Roma 123',
    NumeroTelefono = '555-123456'
WHERE ID = 4;