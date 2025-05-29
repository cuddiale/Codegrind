-- Aggiorna il nome, il cognome e la data di nascita dell'autore con ID 4.

UPDATE Autore
SET Nome = 'Nuovo Nome',
    Cognome = 'Nuovo Cognome',
    DataNascita = '1990-01-01'
WHERE ID = 4;